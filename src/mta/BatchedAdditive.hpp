#ifndef INCLUDED_BATCHED_ADDITIVE_HPP
#define INCLUDED_BATCHED_ADDITIVE_HPP

#include <algorithm>
#include <array>
#include <utility>

namespace BatchedAdditive {
struct Pair {
  int first;
  int second;
};

static constexpr auto entries = 1024;

struct Batched {
  std::array<int, entries> iter_pos;
  std::array<Pair, entries> pairs;

  constexpr Batched(std::array<int, entries> iter_pos_,
                    std::array<Pair, entries> pairs_)
      : iter_pos{iter_pos_}, pairs{pairs_} {}
};

/**
   generate_batch. This function returns a "batch" for additive batching for the
GCM share derivation. You can view this as just a builder function.
**/
constexpr Batched generate_batch();

/**
   max_value_in_batch. This function returns the maximum iteration value in the
 batch.
 **/
constexpr unsigned max_value_in_batch();

template <unsigned iter_count, typename F>
constexpr void iterate_over_iters_and_pairs(F &&f);

template <unsigned iter_count, bool unique>
constexpr std::array<int, entries> get_inputs_used();

template <unsigned iter_count, bool unique>
constexpr unsigned number_of_inputs();

template <unsigned iter_count>
constexpr std::array<int, entries> get_unique_inputs_set();

template <unsigned iter_count>
constexpr std::array<int, entries> get_unique_outputs_set();

template <unsigned iter_count> constexpr unsigned number_of_unique_inputs();
template <unsigned iter_count> constexpr unsigned number_of_total_inputs();

template <unsigned iter_count, bool return_total>
constexpr auto unique_outputs_impl();

template <unsigned iter_count> constexpr unsigned number_of_unique_outputs();
template <unsigned iter_count> constexpr auto get_unique_outputs();

template <unsigned iter_count> constexpr auto get_unique_inputs();
template <unsigned iter_count> constexpr auto get_input_positions();

} // namespace BatchedAdditive

#include "BatchedAdditive.inl"

#endif
