#ifndef INCLUDED_BATCHED_ADDITIVE_HPP
#error Do not include BatchedAdditive.inl without BatchedAdditive.hpp
#endif

constexpr BatchedAdditive::Batched BatchedAdditive::generate_batch() {
  // This was initially generated with the following code, but the compiler
  // really don't like it in a constexpr setting (probably because of the
  // BatchedAdditive::entries * 1023 * 3 loop!)
  std::array arr{
      0, 0, 1, 0, 1, 1, 2, 0, 1, 1, 2, 1, 2, 2, 2, 0, 1, 1, 2, 1, 2, 2, 2, 1, 2,
      2, 2, 2, 2, 2, 3, 0, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 3, 1, 2, 2,
      2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 0, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2,
      2, 2, 2, 3, 1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 1, 2, 2, 2, 2,
      2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3,
      3, 3, 0, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 3, 1, 2, 2, 2, 2, 2, 2,
      3, 2, 2, 2, 3, 2, 3, 3, 3, 1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3,
      2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 1, 2, 2, 2, 2, 2, 2, 3, 2,
      2, 2, 3, 2, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2,
      2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 0, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 3, 1, 2, 2, 2,
      2, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2,
      3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 1, 2, 2, 2, 2, 2,
      2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3,
      3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2,
      2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3,
      3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2,
      3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 0, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2,
      2, 3, 1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 1, 2, 2, 2, 2, 2, 2,
      3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3,
      1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2,
      3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2,
      3, 2, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 3,
      2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 1, 2, 2, 2, 2, 2, 2, 3,
      2, 2, 2, 3, 2, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2,
      2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 2, 2, 2, 3, 2,
      3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 4, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3,
      3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 3, 4, 4, 4, 0};

  // Pairs contains the elements that are (at the root of it all) multiplied to
  // produce a particular value. This ignores squaring i.e. h^1 = (0, 0), h^2 =
  // (0, 0) too, etc etc.
  std::array pairs{
      BatchedAdditive::Pair{0, 0},     BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 1},     BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 3},     BatchedAdditive::Pair{0, 1},
      BatchedAdditive::Pair{2, 3},     BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 7},     BatchedAdditive::Pair{0, 3},
      BatchedAdditive::Pair{2, 7},     BatchedAdditive::Pair{0, 1},
      BatchedAdditive::Pair{2, 9},     BatchedAdditive::Pair{2, 3},
      BatchedAdditive::Pair{2, 11},    BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 15},    BatchedAdditive::Pair{0, 7},
      BatchedAdditive::Pair{2, 15},    BatchedAdditive::Pair{0, 3},
      BatchedAdditive::Pair{2, 17},    BatchedAdditive::Pair{2, 7},
      BatchedAdditive::Pair{2, 19},    BatchedAdditive::Pair{0, 1},
      BatchedAdditive::Pair{4, 19},    BatchedAdditive::Pair{2, 9},
      BatchedAdditive::Pair{2, 23},    BatchedAdditive::Pair{2, 3},
      BatchedAdditive::Pair{4, 23},    BatchedAdditive::Pair{2, 11},
      BatchedAdditive::Pair{0, 29},    BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 31},    BatchedAdditive::Pair{0, 15},
      BatchedAdditive::Pair{2, 31},    BatchedAdditive::Pair{0, 7},
      BatchedAdditive::Pair{2, 33},    BatchedAdditive::Pair{2, 15},
      BatchedAdditive::Pair{2, 35},    BatchedAdditive::Pair{0, 3},
      BatchedAdditive::Pair{4, 35},    BatchedAdditive::Pair{2, 17},
      BatchedAdditive::Pair{2, 39},    BatchedAdditive::Pair{2, 7},
      BatchedAdditive::Pair{4, 39},    BatchedAdditive::Pair{2, 19},
      BatchedAdditive::Pair{0, 45},    BatchedAdditive::Pair{0, 1},
      BatchedAdditive::Pair{8, 39},    BatchedAdditive::Pair{4, 19},
      BatchedAdditive::Pair{2, 47},    BatchedAdditive::Pair{2, 9},
      BatchedAdditive::Pair{4, 47},    BatchedAdditive::Pair{2, 23},
      BatchedAdditive::Pair{0, 53},    BatchedAdditive::Pair{2, 3},
      BatchedAdditive::Pair{8, 47},    BatchedAdditive::Pair{4, 23},
      BatchedAdditive::Pair{0, 57},    BatchedAdditive::Pair{2, 11},
      BatchedAdditive::Pair{0, 59},    BatchedAdditive::Pair{0, 29},
      BatchedAdditive::Pair{2, 59},    BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 63},    BatchedAdditive::Pair{0, 31},
      BatchedAdditive::Pair{2, 63},    BatchedAdditive::Pair{0, 15},
      BatchedAdditive::Pair{2, 65},    BatchedAdditive::Pair{2, 31},
      BatchedAdditive::Pair{2, 67},    BatchedAdditive::Pair{0, 7},
      BatchedAdditive::Pair{4, 67},    BatchedAdditive::Pair{2, 33},
      BatchedAdditive::Pair{2, 71},    BatchedAdditive::Pair{2, 15},
      BatchedAdditive::Pair{4, 71},    BatchedAdditive::Pair{2, 35},
      BatchedAdditive::Pair{0, 77},    BatchedAdditive::Pair{0, 3},
      BatchedAdditive::Pair{8, 71},    BatchedAdditive::Pair{4, 35},
      BatchedAdditive::Pair{2, 79},    BatchedAdditive::Pair{2, 17},
      BatchedAdditive::Pair{4, 79},    BatchedAdditive::Pair{2, 39},
      BatchedAdditive::Pair{0, 85},    BatchedAdditive::Pair{2, 7},
      BatchedAdditive::Pair{8, 79},    BatchedAdditive::Pair{4, 39},
      BatchedAdditive::Pair{0, 89},    BatchedAdditive::Pair{2, 19},
      BatchedAdditive::Pair{0, 91},    BatchedAdditive::Pair{0, 45},
      BatchedAdditive::Pair{2, 91},    BatchedAdditive::Pair{0, 1},
      BatchedAdditive::Pair{16, 79},   BatchedAdditive::Pair{8, 39},
      BatchedAdditive::Pair{2, 95},    BatchedAdditive::Pair{4, 19},
      BatchedAdditive::Pair{4, 95},    BatchedAdditive::Pair{2, 47},
      BatchedAdditive::Pair{0, 101},   BatchedAdditive::Pair{2, 9},
      BatchedAdditive::Pair{8, 95},    BatchedAdditive::Pair{4, 47},
      BatchedAdditive::Pair{0, 105},   BatchedAdditive::Pair{2, 23},
      BatchedAdditive::Pair{0, 107},   BatchedAdditive::Pair{0, 53},
      BatchedAdditive::Pair{2, 107},   BatchedAdditive::Pair{2, 3},
      BatchedAdditive::Pair{16, 95},   BatchedAdditive::Pair{8, 47},
      BatchedAdditive::Pair{0, 113},   BatchedAdditive::Pair{4, 23},
      BatchedAdditive::Pair{0, 115},   BatchedAdditive::Pair{0, 57},
      BatchedAdditive::Pair{2, 115},   BatchedAdditive::Pair{2, 11},
      BatchedAdditive::Pair{0, 119},   BatchedAdditive::Pair{0, 59},
      BatchedAdditive::Pair{2, 119},   BatchedAdditive::Pair{0, 29},
      BatchedAdditive::Pair{4, 119},   BatchedAdditive::Pair{2, 59},
      BatchedAdditive::Pair{6, 119},   BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 127},   BatchedAdditive::Pair{0, 63},
      BatchedAdditive::Pair{2, 127},   BatchedAdditive::Pair{0, 31},
      BatchedAdditive::Pair{2, 129},   BatchedAdditive::Pair{2, 63},
      BatchedAdditive::Pair{2, 131},   BatchedAdditive::Pair{0, 15},
      BatchedAdditive::Pair{131, 4},   BatchedAdditive::Pair{2, 65},
      BatchedAdditive::Pair{2, 135},   BatchedAdditive::Pair{2, 31},
      BatchedAdditive::Pair{131, 8},   BatchedAdditive::Pair{2, 67},
      BatchedAdditive::Pair{0, 141},   BatchedAdditive::Pair{0, 7},
      BatchedAdditive::Pair{135, 8},   BatchedAdditive::Pair{4, 67},
      BatchedAdditive::Pair{2, 143},   BatchedAdditive::Pair{2, 33},
      BatchedAdditive::Pair{131, 16},  BatchedAdditive::Pair{2, 71},
      BatchedAdditive::Pair{0, 149},   BatchedAdditive::Pair{2, 15},
      BatchedAdditive::Pair{135, 16},  BatchedAdditive::Pair{4, 71},
      BatchedAdditive::Pair{0, 153},   BatchedAdditive::Pair{2, 35},
      BatchedAdditive::Pair{0, 155},   BatchedAdditive::Pair{0, 77},
      BatchedAdditive::Pair{2, 155},   BatchedAdditive::Pair{0, 3},
      BatchedAdditive::Pair{128, 31},  BatchedAdditive::Pair{129, 31},
      BatchedAdditive::Pair{2, 159},   BatchedAdditive::Pair{131, 31},
      BatchedAdditive::Pair{131, 32},  BatchedAdditive::Pair{2, 79},
      BatchedAdditive::Pair{0, 165},   BatchedAdditive::Pair{2, 17},
      BatchedAdditive::Pair{135, 32},  BatchedAdditive::Pair{4, 79},
      BatchedAdditive::Pair{0, 169},   BatchedAdditive::Pair{2, 39},
      BatchedAdditive::Pair{0, 171},   BatchedAdditive::Pair{0, 85},
      BatchedAdditive::Pair{2, 171},   BatchedAdditive::Pair{2, 7},
      BatchedAdditive::Pair{128, 47},  BatchedAdditive::Pair{129, 47},
      BatchedAdditive::Pair{0, 177},   BatchedAdditive::Pair{131, 47},
      BatchedAdditive::Pair{0, 179},   BatchedAdditive::Pair{0, 89},
      BatchedAdditive::Pair{2, 179},   BatchedAdditive::Pair{2, 19},
      BatchedAdditive::Pair{0, 183},   BatchedAdditive::Pair{0, 91},
      BatchedAdditive::Pair{2, 183},   BatchedAdditive::Pair{0, 45},
      BatchedAdditive::Pair{4, 183},   BatchedAdditive::Pair{2, 91},
      BatchedAdditive::Pair{6, 183},   BatchedAdditive::Pair{0, 1},
      BatchedAdditive::Pair{128, 63},  BatchedAdditive::Pair{129, 63},
      BatchedAdditive::Pair{2, 191},   BatchedAdditive::Pair{131, 63},
      BatchedAdditive::Pair{131, 64},  BatchedAdditive::Pair{2, 95},
      BatchedAdditive::Pair{0, 197},   BatchedAdditive::Pair{131, 67},
      BatchedAdditive::Pair{135, 64},  BatchedAdditive::Pair{4, 95},
      BatchedAdditive::Pair{0, 201},   BatchedAdditive::Pair{2, 47},
      BatchedAdditive::Pair{0, 203},   BatchedAdditive::Pair{0, 101},
      BatchedAdditive::Pair{2, 203},   BatchedAdditive::Pair{2, 9},
      BatchedAdditive::Pair{128, 79},  BatchedAdditive::Pair{129, 79},
      BatchedAdditive::Pair{0, 209},   BatchedAdditive::Pair{131, 79},
      BatchedAdditive::Pair{0, 211},   BatchedAdditive::Pair{0, 105},
      BatchedAdditive::Pair{2, 211},   BatchedAdditive::Pair{2, 23},
      BatchedAdditive::Pair{0, 215},   BatchedAdditive::Pair{0, 107},
      BatchedAdditive::Pair{2, 215},   BatchedAdditive::Pair{0, 53},
      BatchedAdditive::Pair{4, 215},   BatchedAdditive::Pair{2, 107},
      BatchedAdditive::Pair{6, 215},   BatchedAdditive::Pair{2, 3},
      BatchedAdditive::Pair{128, 95},  BatchedAdditive::Pair{129, 95},
      BatchedAdditive::Pair{0, 225},   BatchedAdditive::Pair{131, 95},
      BatchedAdditive::Pair{0, 227},   BatchedAdditive::Pair{0, 113},
      BatchedAdditive::Pair{2, 227},   BatchedAdditive::Pair{4, 23},
      BatchedAdditive::Pair{0, 231},   BatchedAdditive::Pair{0, 115},
      BatchedAdditive::Pair{2, 231},   BatchedAdditive::Pair{0, 57},
      BatchedAdditive::Pair{4, 231},   BatchedAdditive::Pair{2, 115},
      BatchedAdditive::Pair{6, 231},   BatchedAdditive::Pair{2, 11},
      BatchedAdditive::Pair{0, 239},   BatchedAdditive::Pair{0, 119},
      BatchedAdditive::Pair{2, 239},   BatchedAdditive::Pair{0, 59},
      BatchedAdditive::Pair{4, 239},   BatchedAdditive::Pair{2, 119},
      BatchedAdditive::Pair{6, 239},   BatchedAdditive::Pair{0, 29},
      BatchedAdditive::Pair{8, 239},   BatchedAdditive::Pair{4, 119},
      BatchedAdditive::Pair{10, 239},  BatchedAdditive::Pair{2, 59},
      BatchedAdditive::Pair{12, 239},  BatchedAdditive::Pair{6, 119},
      BatchedAdditive::Pair{14, 239},  BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 255},   BatchedAdditive::Pair{0, 127},
      BatchedAdditive::Pair{2, 255},   BatchedAdditive::Pair{0, 63},
      BatchedAdditive::Pair{2, 257},   BatchedAdditive::Pair{2, 127},
      BatchedAdditive::Pair{2, 259},   BatchedAdditive::Pair{0, 31},
      BatchedAdditive::Pair{4, 259},   BatchedAdditive::Pair{2, 129},
      BatchedAdditive::Pair{2, 263},   BatchedAdditive::Pair{2, 63},
      BatchedAdditive::Pair{4, 263},   BatchedAdditive::Pair{2, 131},
      BatchedAdditive::Pair{0, 269},   BatchedAdditive::Pair{0, 15},
      BatchedAdditive::Pair{8, 263},   BatchedAdditive::Pair{131, 4},
      BatchedAdditive::Pair{2, 271},   BatchedAdditive::Pair{2, 65},
      BatchedAdditive::Pair{4, 271},   BatchedAdditive::Pair{2, 135},
      BatchedAdditive::Pair{0, 277},   BatchedAdditive::Pair{2, 31},
      BatchedAdditive::Pair{8, 271},   BatchedAdditive::Pair{131, 8},
      BatchedAdditive::Pair{0, 281},   BatchedAdditive::Pair{2, 67},
      BatchedAdditive::Pair{0, 283},   BatchedAdditive::Pair{0, 141},
      BatchedAdditive::Pair{2, 283},   BatchedAdditive::Pair{0, 7},
      BatchedAdditive::Pair{128, 159}, BatchedAdditive::Pair{129, 159},
      BatchedAdditive::Pair{2, 287},   BatchedAdditive::Pair{131, 159},
      BatchedAdditive::Pair{4, 287},   BatchedAdditive::Pair{2, 143},
      BatchedAdditive::Pair{0, 293},   BatchedAdditive::Pair{2, 33},
      BatchedAdditive::Pair{8, 287},   BatchedAdditive::Pair{131, 16},
      BatchedAdditive::Pair{0, 297},   BatchedAdditive::Pair{2, 71},
      BatchedAdditive::Pair{0, 299},   BatchedAdditive::Pair{0, 149},
      BatchedAdditive::Pair{2, 299},   BatchedAdditive::Pair{2, 15},
      BatchedAdditive::Pair{16, 287},  BatchedAdditive::Pair{135, 16},
      BatchedAdditive::Pair{0, 305},   BatchedAdditive::Pair{4, 71},
      BatchedAdditive::Pair{0, 307},   BatchedAdditive::Pair{0, 153},
      BatchedAdditive::Pair{2, 307},   BatchedAdditive::Pair{2, 35},
      BatchedAdditive::Pair{0, 311},   BatchedAdditive::Pair{0, 155},
      BatchedAdditive::Pair{2, 311},   BatchedAdditive::Pair{0, 77},
      BatchedAdditive::Pair{4, 311},   BatchedAdditive::Pair{2, 155},
      BatchedAdditive::Pair{6, 311},   BatchedAdditive::Pair{0, 3},
      BatchedAdditive::Pair{128, 191}, BatchedAdditive::Pair{129, 191},
      BatchedAdditive::Pair{2, 319},   BatchedAdditive::Pair{131, 191},
      BatchedAdditive::Pair{4, 319},   BatchedAdditive::Pair{2, 159},
      BatchedAdditive::Pair{0, 325},   BatchedAdditive::Pair{131, 31},
      BatchedAdditive::Pair{8, 319},   BatchedAdditive::Pair{131, 32},
      BatchedAdditive::Pair{0, 329},   BatchedAdditive::Pair{2, 79},
      BatchedAdditive::Pair{0, 331},   BatchedAdditive::Pair{0, 165},
      BatchedAdditive::Pair{2, 331},   BatchedAdditive::Pair{2, 17},
      BatchedAdditive::Pair{16, 319},  BatchedAdditive::Pair{135, 32},
      BatchedAdditive::Pair{0, 337},   BatchedAdditive::Pair{4, 79},
      BatchedAdditive::Pair{0, 339},   BatchedAdditive::Pair{0, 169},
      BatchedAdditive::Pair{2, 339},   BatchedAdditive::Pair{2, 39},
      BatchedAdditive::Pair{0, 343},   BatchedAdditive::Pair{0, 171},
      BatchedAdditive::Pair{2, 343},   BatchedAdditive::Pair{0, 85},
      BatchedAdditive::Pair{4, 343},   BatchedAdditive::Pair{2, 171},
      BatchedAdditive::Pair{6, 343},   BatchedAdditive::Pair{2, 7},
      BatchedAdditive::Pair{256, 95},  BatchedAdditive::Pair{128, 47},
      BatchedAdditive::Pair{0, 353},   BatchedAdditive::Pair{129, 47},
      BatchedAdditive::Pair{0, 355},   BatchedAdditive::Pair{0, 177},
      BatchedAdditive::Pair{2, 355},   BatchedAdditive::Pair{131, 47},
      BatchedAdditive::Pair{0, 359},   BatchedAdditive::Pair{0, 179},
      BatchedAdditive::Pair{2, 359},   BatchedAdditive::Pair{0, 89},
      BatchedAdditive::Pair{4, 359},   BatchedAdditive::Pair{2, 179},
      BatchedAdditive::Pair{6, 359},   BatchedAdditive::Pair{2, 19},
      BatchedAdditive::Pair{0, 367},   BatchedAdditive::Pair{0, 183},
      BatchedAdditive::Pair{2, 367},   BatchedAdditive::Pair{0, 91},
      BatchedAdditive::Pair{4, 367},   BatchedAdditive::Pair{2, 183},
      BatchedAdditive::Pair{6, 367},   BatchedAdditive::Pair{0, 45},
      BatchedAdditive::Pair{8, 367},   BatchedAdditive::Pair{4, 183},
      BatchedAdditive::Pair{10, 367},  BatchedAdditive::Pair{2, 91},
      BatchedAdditive::Pair{12, 367},  BatchedAdditive::Pair{6, 183},
      BatchedAdditive::Pair{14, 367},  BatchedAdditive::Pair{0, 1},
      BatchedAdditive::Pair{383, 0},   BatchedAdditive::Pair{383, 1},
      BatchedAdditive::Pair{383, 2},   BatchedAdditive::Pair{383, 3},
      BatchedAdditive::Pair{383, 4},   BatchedAdditive::Pair{383, 5},
      BatchedAdditive::Pair{0, 389},   BatchedAdditive::Pair{383, 7},
      BatchedAdditive::Pair{383, 8},   BatchedAdditive::Pair{383, 9},
      BatchedAdditive::Pair{0, 393},   BatchedAdditive::Pair{383, 11},
      BatchedAdditive::Pair{0, 395},   BatchedAdditive::Pair{0, 197},
      BatchedAdditive::Pair{2, 395},   BatchedAdditive::Pair{383, 15},
      BatchedAdditive::Pair{383, 16},  BatchedAdditive::Pair{383, 17},
      BatchedAdditive::Pair{0, 401},   BatchedAdditive::Pair{383, 19},
      BatchedAdditive::Pair{0, 403},   BatchedAdditive::Pair{0, 201},
      BatchedAdditive::Pair{2, 403},   BatchedAdditive::Pair{383, 23},
      BatchedAdditive::Pair{0, 407},   BatchedAdditive::Pair{0, 203},
      BatchedAdditive::Pair{2, 407},   BatchedAdditive::Pair{0, 101},
      BatchedAdditive::Pair{4, 407},   BatchedAdditive::Pair{2, 203},
      BatchedAdditive::Pair{6, 407},   BatchedAdditive::Pair{383, 31},
      BatchedAdditive::Pair{383, 32},  BatchedAdditive::Pair{383, 33},
      BatchedAdditive::Pair{0, 417},   BatchedAdditive::Pair{383, 35},
      BatchedAdditive::Pair{0, 419},   BatchedAdditive::Pair{0, 209},
      BatchedAdditive::Pair{2, 419},   BatchedAdditive::Pair{383, 39},
      BatchedAdditive::Pair{0, 423},   BatchedAdditive::Pair{0, 211},
      BatchedAdditive::Pair{2, 423},   BatchedAdditive::Pair{0, 105},
      BatchedAdditive::Pair{4, 423},   BatchedAdditive::Pair{2, 211},
      BatchedAdditive::Pair{6, 423},   BatchedAdditive::Pair{383, 47},
      BatchedAdditive::Pair{0, 431},   BatchedAdditive::Pair{0, 215},
      BatchedAdditive::Pair{2, 431},   BatchedAdditive::Pair{0, 107},
      BatchedAdditive::Pair{4, 431},   BatchedAdditive::Pair{2, 215},
      BatchedAdditive::Pair{6, 431},   BatchedAdditive::Pair{0, 53},
      BatchedAdditive::Pair{8, 431},   BatchedAdditive::Pair{4, 215},
      BatchedAdditive::Pair{10, 431},  BatchedAdditive::Pair{2, 107},
      BatchedAdditive::Pair{12, 431},  BatchedAdditive::Pair{6, 215},
      BatchedAdditive::Pair{14, 431},  BatchedAdditive::Pair{383, 63},
      BatchedAdditive::Pair{383, 64},  BatchedAdditive::Pair{383, 65},
      BatchedAdditive::Pair{0, 449},   BatchedAdditive::Pair{383, 67},
      BatchedAdditive::Pair{0, 451},   BatchedAdditive::Pair{0, 225},
      BatchedAdditive::Pair{2, 451},   BatchedAdditive::Pair{383, 71},
      BatchedAdditive::Pair{0, 455},   BatchedAdditive::Pair{0, 227},
      BatchedAdditive::Pair{2, 455},   BatchedAdditive::Pair{0, 113},
      BatchedAdditive::Pair{4, 455},   BatchedAdditive::Pair{2, 227},
      BatchedAdditive::Pair{6, 455},   BatchedAdditive::Pair{383, 79},
      BatchedAdditive::Pair{0, 463},   BatchedAdditive::Pair{0, 231},
      BatchedAdditive::Pair{2, 463},   BatchedAdditive::Pair{0, 115},
      BatchedAdditive::Pair{4, 463},   BatchedAdditive::Pair{2, 231},
      BatchedAdditive::Pair{6, 463},   BatchedAdditive::Pair{0, 57},
      BatchedAdditive::Pair{8, 463},   BatchedAdditive::Pair{4, 231},
      BatchedAdditive::Pair{10, 463},  BatchedAdditive::Pair{2, 115},
      BatchedAdditive::Pair{12, 463},  BatchedAdditive::Pair{6, 231},
      BatchedAdditive::Pair{14, 463},  BatchedAdditive::Pair{383, 95},
      BatchedAdditive::Pair{0, 479},   BatchedAdditive::Pair{0, 239},
      BatchedAdditive::Pair{2, 479},   BatchedAdditive::Pair{0, 119},
      BatchedAdditive::Pair{4, 479},   BatchedAdditive::Pair{2, 239},
      BatchedAdditive::Pair{6, 479},   BatchedAdditive::Pair{0, 59},
      BatchedAdditive::Pair{8, 479},   BatchedAdditive::Pair{4, 239},
      BatchedAdditive::Pair{10, 479},  BatchedAdditive::Pair{2, 119},
      BatchedAdditive::Pair{12, 479},  BatchedAdditive::Pair{6, 239},
      BatchedAdditive::Pair{14, 479},  BatchedAdditive::Pair{0, 29},
      BatchedAdditive::Pair{16, 479},  BatchedAdditive::Pair{8, 239},
      BatchedAdditive::Pair{18, 479},  BatchedAdditive::Pair{4, 119},
      BatchedAdditive::Pair{20, 479},  BatchedAdditive::Pair{10, 239},
      BatchedAdditive::Pair{22, 479},  BatchedAdditive::Pair{2, 59},
      BatchedAdditive::Pair{24, 479},  BatchedAdditive::Pair{12, 239},
      BatchedAdditive::Pair{26, 479},  BatchedAdditive::Pair{6, 119},
      BatchedAdditive::Pair{28, 479},  BatchedAdditive::Pair{14, 239},
      BatchedAdditive::Pair{0, 509},   BatchedAdditive::Pair{0, 0},
      BatchedAdditive::Pair{0, 511},   BatchedAdditive::Pair{0, 255},
      BatchedAdditive::Pair{2, 511},   BatchedAdditive::Pair{0, 127},
      BatchedAdditive::Pair{2, 513},   BatchedAdditive::Pair{2, 255},
      BatchedAdditive::Pair{2, 515},   BatchedAdditive::Pair{0, 63},
      BatchedAdditive::Pair{4, 515},   BatchedAdditive::Pair{2, 257},
      BatchedAdditive::Pair{2, 519},   BatchedAdditive::Pair{2, 127},
      BatchedAdditive::Pair{4, 519},   BatchedAdditive::Pair{2, 259},
      BatchedAdditive::Pair{0, 525},   BatchedAdditive::Pair{0, 31},
      BatchedAdditive::Pair{8, 519},   BatchedAdditive::Pair{4, 259},
      BatchedAdditive::Pair{2, 527},   BatchedAdditive::Pair{2, 129},
      BatchedAdditive::Pair{4, 527},   BatchedAdditive::Pair{2, 263},
      BatchedAdditive::Pair{0, 533},   BatchedAdditive::Pair{2, 63},
      BatchedAdditive::Pair{8, 527},   BatchedAdditive::Pair{4, 263},
      BatchedAdditive::Pair{0, 537},   BatchedAdditive::Pair{2, 131},
      BatchedAdditive::Pair{0, 539},   BatchedAdditive::Pair{0, 269},
      BatchedAdditive::Pair{2, 539},   BatchedAdditive::Pair{0, 15},
      BatchedAdditive::Pair{16, 527},  BatchedAdditive::Pair{8, 263},
      BatchedAdditive::Pair{2, 543},   BatchedAdditive::Pair{131, 4},
      BatchedAdditive::Pair{4, 543},   BatchedAdditive::Pair{2, 271},
      BatchedAdditive::Pair{0, 549},   BatchedAdditive::Pair{2, 65},
      BatchedAdditive::Pair{8, 543},   BatchedAdditive::Pair{4, 271},
      BatchedAdditive::Pair{0, 553},   BatchedAdditive::Pair{2, 135},
      BatchedAdditive::Pair{0, 555},   BatchedAdditive::Pair{0, 277},
      BatchedAdditive::Pair{2, 555},   BatchedAdditive::Pair{2, 31},
      BatchedAdditive::Pair{16, 543},  BatchedAdditive::Pair{8, 271},
      BatchedAdditive::Pair{0, 561},   BatchedAdditive::Pair{131, 8},
      BatchedAdditive::Pair{0, 563},   BatchedAdditive::Pair{0, 281},
      BatchedAdditive::Pair{2, 563},   BatchedAdditive::Pair{2, 67},
      BatchedAdditive::Pair{0, 567},   BatchedAdditive::Pair{0, 283},
      BatchedAdditive::Pair{2, 567},   BatchedAdditive::Pair{0, 141},
      BatchedAdditive::Pair{4, 567},   BatchedAdditive::Pair{2, 283},
      BatchedAdditive::Pair{6, 567},   BatchedAdditive::Pair{0, 7},
      BatchedAdditive::Pair{256, 319}, BatchedAdditive::Pair{128, 159},
      BatchedAdditive::Pair{2, 575},   BatchedAdditive::Pair{129, 159},
      BatchedAdditive::Pair{4, 575},   BatchedAdditive::Pair{2, 287},
      BatchedAdditive::Pair{0, 581},   BatchedAdditive::Pair{131, 159},
      BatchedAdditive::Pair{8, 575},   BatchedAdditive::Pair{4, 287},
      BatchedAdditive::Pair{0, 585},   BatchedAdditive::Pair{2, 143},
      BatchedAdditive::Pair{0, 587},   BatchedAdditive::Pair{0, 293},
      BatchedAdditive::Pair{2, 587},   BatchedAdditive::Pair{2, 33},
      BatchedAdditive::Pair{16, 575},  BatchedAdditive::Pair{8, 287},
      BatchedAdditive::Pair{0, 593},   BatchedAdditive::Pair{131, 16},
      BatchedAdditive::Pair{0, 595},   BatchedAdditive::Pair{0, 297},
      BatchedAdditive::Pair{2, 595},   BatchedAdditive::Pair{2, 71},
      BatchedAdditive::Pair{0, 599},   BatchedAdditive::Pair{0, 299},
      BatchedAdditive::Pair{2, 599},   BatchedAdditive::Pair{0, 149},
      BatchedAdditive::Pair{4, 599},   BatchedAdditive::Pair{2, 299},
      BatchedAdditive::Pair{6, 599},   BatchedAdditive::Pair{2, 15},
      BatchedAdditive::Pair{512, 95},  BatchedAdditive::Pair{16, 287},
      BatchedAdditive::Pair{0, 609},   BatchedAdditive::Pair{135, 16},
      BatchedAdditive::Pair{0, 611},   BatchedAdditive::Pair{0, 305},
      BatchedAdditive::Pair{2, 611},   BatchedAdditive::Pair{4, 71},
      BatchedAdditive::Pair{0, 615},   BatchedAdditive::Pair{0, 307},
      BatchedAdditive::Pair{2, 615},   BatchedAdditive::Pair{0, 153},
      BatchedAdditive::Pair{4, 615},   BatchedAdditive::Pair{2, 307},
      BatchedAdditive::Pair{6, 615},   BatchedAdditive::Pair{2, 35},
      BatchedAdditive::Pair{0, 623},   BatchedAdditive::Pair{0, 311},
      BatchedAdditive::Pair{2, 623},   BatchedAdditive::Pair{0, 155},
      BatchedAdditive::Pair{4, 623},   BatchedAdditive::Pair{2, 311},
      BatchedAdditive::Pair{6, 623},   BatchedAdditive::Pair{0, 77},
      BatchedAdditive::Pair{8, 623},   BatchedAdditive::Pair{4, 311},
      BatchedAdditive::Pair{10, 623},  BatchedAdditive::Pair{2, 155},
      BatchedAdditive::Pair{12, 623},  BatchedAdditive::Pair{6, 311},
      BatchedAdditive::Pair{14, 623},  BatchedAdditive::Pair{0, 3},
      BatchedAdditive::Pair{383, 256}, BatchedAdditive::Pair{383, 257},
      BatchedAdditive::Pair{639, 2},   BatchedAdditive::Pair{383, 259},
      BatchedAdditive::Pair{639, 4},   BatchedAdditive::Pair{639, 5},
      BatchedAdditive::Pair{0, 645},   BatchedAdditive::Pair{383, 263},
      BatchedAdditive::Pair{639, 8},   BatchedAdditive::Pair{639, 9},
      BatchedAdditive::Pair{0, 649},   BatchedAdditive::Pair{639, 11},
      BatchedAdditive::Pair{0, 651},   BatchedAdditive::Pair{0, 325},
      BatchedAdditive::Pair{2, 651},   BatchedAdditive::Pair{383, 271},
      BatchedAdditive::Pair{639, 16},  BatchedAdditive::Pair{639, 17},
      BatchedAdditive::Pair{0, 657},   BatchedAdditive::Pair{639, 19},
      BatchedAdditive::Pair{0, 659},   BatchedAdditive::Pair{0, 329},
      BatchedAdditive::Pair{2, 659},   BatchedAdditive::Pair{639, 23},
      BatchedAdditive::Pair{0, 663},   BatchedAdditive::Pair{0, 331},
      BatchedAdditive::Pair{2, 663},   BatchedAdditive::Pair{0, 165},
      BatchedAdditive::Pair{4, 663},   BatchedAdditive::Pair{2, 331},
      BatchedAdditive::Pair{6, 663},   BatchedAdditive::Pair{383, 287},
      BatchedAdditive::Pair{639, 32},  BatchedAdditive::Pair{639, 33},
      BatchedAdditive::Pair{0, 673},   BatchedAdditive::Pair{639, 35},
      BatchedAdditive::Pair{0, 675},   BatchedAdditive::Pair{0, 337},
      BatchedAdditive::Pair{2, 675},   BatchedAdditive::Pair{639, 39},
      BatchedAdditive::Pair{0, 679},   BatchedAdditive::Pair{0, 339},
      BatchedAdditive::Pair{2, 679},   BatchedAdditive::Pair{0, 169},
      BatchedAdditive::Pair{4, 679},   BatchedAdditive::Pair{2, 339},
      BatchedAdditive::Pair{6, 679},   BatchedAdditive::Pair{639, 47},
      BatchedAdditive::Pair{0, 687},   BatchedAdditive::Pair{0, 343},
      BatchedAdditive::Pair{2, 687},   BatchedAdditive::Pair{0, 171},
      BatchedAdditive::Pair{4, 687},   BatchedAdditive::Pair{2, 343},
      BatchedAdditive::Pair{6, 687},   BatchedAdditive::Pair{0, 85},
      BatchedAdditive::Pair{8, 687},   BatchedAdditive::Pair{4, 343},
      BatchedAdditive::Pair{10, 687},  BatchedAdditive::Pair{2, 171},
      BatchedAdditive::Pair{12, 687},  BatchedAdditive::Pair{6, 343},
      BatchedAdditive::Pair{14, 687},  BatchedAdditive::Pair{383, 319},
      BatchedAdditive::Pair{639, 64},  BatchedAdditive::Pair{639, 65},
      BatchedAdditive::Pair{0, 705},   BatchedAdditive::Pair{639, 67},
      BatchedAdditive::Pair{0, 707},   BatchedAdditive::Pair{0, 353},
      BatchedAdditive::Pair{2, 707},   BatchedAdditive::Pair{639, 71},
      BatchedAdditive::Pair{0, 711},   BatchedAdditive::Pair{0, 355},
      BatchedAdditive::Pair{2, 711},   BatchedAdditive::Pair{0, 177},
      BatchedAdditive::Pair{4, 711},   BatchedAdditive::Pair{2, 355},
      BatchedAdditive::Pair{6, 711},   BatchedAdditive::Pair{639, 79},
      BatchedAdditive::Pair{0, 719},   BatchedAdditive::Pair{0, 359},
      BatchedAdditive::Pair{2, 719},   BatchedAdditive::Pair{0, 179},
      BatchedAdditive::Pair{4, 719},   BatchedAdditive::Pair{2, 359},
      BatchedAdditive::Pair{6, 719},   BatchedAdditive::Pair{0, 89},
      BatchedAdditive::Pair{8, 719},   BatchedAdditive::Pair{4, 359},
      BatchedAdditive::Pair{10, 719},  BatchedAdditive::Pair{2, 179},
      BatchedAdditive::Pair{12, 719},  BatchedAdditive::Pair{6, 359},
      BatchedAdditive::Pair{14, 719},  BatchedAdditive::Pair{639, 95},
      BatchedAdditive::Pair{0, 735},   BatchedAdditive::Pair{0, 367},
      BatchedAdditive::Pair{2, 735},   BatchedAdditive::Pair{0, 183},
      BatchedAdditive::Pair{4, 735},   BatchedAdditive::Pair{2, 367},
      BatchedAdditive::Pair{6, 735},   BatchedAdditive::Pair{0, 91},
      BatchedAdditive::Pair{8, 735},   BatchedAdditive::Pair{4, 367},
      BatchedAdditive::Pair{10, 735},  BatchedAdditive::Pair{2, 183},
      BatchedAdditive::Pair{12, 735},  BatchedAdditive::Pair{6, 367},
      BatchedAdditive::Pair{14, 735},  BatchedAdditive::Pair{0, 45},
      BatchedAdditive::Pair{16, 735},  BatchedAdditive::Pair{8, 367},
      BatchedAdditive::Pair{18, 735},  BatchedAdditive::Pair{4, 183},
      BatchedAdditive::Pair{20, 735},  BatchedAdditive::Pair{10, 367},
      BatchedAdditive::Pair{22, 735},  BatchedAdditive::Pair{2, 91},
      BatchedAdditive::Pair{24, 735},  BatchedAdditive::Pair{12, 367},
      BatchedAdditive::Pair{26, 735},  BatchedAdditive::Pair{6, 183},
      BatchedAdditive::Pair{28, 735},  BatchedAdditive::Pair{14, 367},
      BatchedAdditive::Pair{0, 765},   BatchedAdditive::Pair{0, 1},
      BatchedAdditive::Pair{767, 0},   BatchedAdditive::Pair{383, 0},
      BatchedAdditive::Pair{767, 2},   BatchedAdditive::Pair{383, 1},
      BatchedAdditive::Pair{767, 4},   BatchedAdditive::Pair{383, 2},
      BatchedAdditive::Pair{0, 773},   BatchedAdditive::Pair{383, 3},
      BatchedAdditive::Pair{767, 8},   BatchedAdditive::Pair{383, 4},
      BatchedAdditive::Pair{0, 777},   BatchedAdditive::Pair{383, 5},
      BatchedAdditive::Pair{0, 779},   BatchedAdditive::Pair{0, 389},
      BatchedAdditive::Pair{2, 779},   BatchedAdditive::Pair{383, 7},
      BatchedAdditive::Pair{767, 16},  BatchedAdditive::Pair{383, 8},
      BatchedAdditive::Pair{0, 785},   BatchedAdditive::Pair{383, 9},
      BatchedAdditive::Pair{0, 787},   BatchedAdditive::Pair{0, 393},
      BatchedAdditive::Pair{2, 787},   BatchedAdditive::Pair{383, 11},
      BatchedAdditive::Pair{0, 791},   BatchedAdditive::Pair{0, 395},
      BatchedAdditive::Pair{2, 791},   BatchedAdditive::Pair{0, 197},
      BatchedAdditive::Pair{4, 791},   BatchedAdditive::Pair{2, 395},
      BatchedAdditive::Pair{6, 791},   BatchedAdditive::Pair{383, 15},
      BatchedAdditive::Pair{767, 32},  BatchedAdditive::Pair{383, 16},
      BatchedAdditive::Pair{0, 801},   BatchedAdditive::Pair{383, 17},
      BatchedAdditive::Pair{0, 803},   BatchedAdditive::Pair{0, 401},
      BatchedAdditive::Pair{2, 803},   BatchedAdditive::Pair{383, 19},
      BatchedAdditive::Pair{0, 807},   BatchedAdditive::Pair{0, 403},
      BatchedAdditive::Pair{2, 807},   BatchedAdditive::Pair{0, 201},
      BatchedAdditive::Pair{4, 807},   BatchedAdditive::Pair{2, 403},
      BatchedAdditive::Pair{6, 807},   BatchedAdditive::Pair{383, 23},
      BatchedAdditive::Pair{0, 815},   BatchedAdditive::Pair{0, 407},
      BatchedAdditive::Pair{2, 815},   BatchedAdditive::Pair{0, 203},
      BatchedAdditive::Pair{4, 815},   BatchedAdditive::Pair{2, 407},
      BatchedAdditive::Pair{6, 815},   BatchedAdditive::Pair{0, 101},
      BatchedAdditive::Pair{8, 815},   BatchedAdditive::Pair{4, 407},
      BatchedAdditive::Pair{10, 815},  BatchedAdditive::Pair{2, 203},
      BatchedAdditive::Pair{12, 815},  BatchedAdditive::Pair{6, 407},
      BatchedAdditive::Pair{14, 815},  BatchedAdditive::Pair{383, 31},
      BatchedAdditive::Pair{767, 64},  BatchedAdditive::Pair{383, 32},
      BatchedAdditive::Pair{0, 833},   BatchedAdditive::Pair{383, 33},
      BatchedAdditive::Pair{0, 835},   BatchedAdditive::Pair{0, 417},
      BatchedAdditive::Pair{2, 835},   BatchedAdditive::Pair{383, 35},
      BatchedAdditive::Pair{0, 839},   BatchedAdditive::Pair{0, 419},
      BatchedAdditive::Pair{2, 839},   BatchedAdditive::Pair{0, 209},
      BatchedAdditive::Pair{4, 839},   BatchedAdditive::Pair{2, 419},
      BatchedAdditive::Pair{6, 839},   BatchedAdditive::Pair{383, 39},
      BatchedAdditive::Pair{0, 847},   BatchedAdditive::Pair{0, 423},
      BatchedAdditive::Pair{2, 847},   BatchedAdditive::Pair{0, 211},
      BatchedAdditive::Pair{4, 847},   BatchedAdditive::Pair{2, 423},
      BatchedAdditive::Pair{6, 847},   BatchedAdditive::Pair{0, 105},
      BatchedAdditive::Pair{8, 847},   BatchedAdditive::Pair{4, 423},
      BatchedAdditive::Pair{10, 847},  BatchedAdditive::Pair{2, 211},
      BatchedAdditive::Pair{12, 847},  BatchedAdditive::Pair{6, 423},
      BatchedAdditive::Pair{14, 847},  BatchedAdditive::Pair{383, 47},
      BatchedAdditive::Pair{0, 863},   BatchedAdditive::Pair{0, 431},
      BatchedAdditive::Pair{2, 863},   BatchedAdditive::Pair{0, 215},
      BatchedAdditive::Pair{4, 863},   BatchedAdditive::Pair{2, 431},
      BatchedAdditive::Pair{6, 863},   BatchedAdditive::Pair{0, 107},
      BatchedAdditive::Pair{8, 863},   BatchedAdditive::Pair{4, 431},
      BatchedAdditive::Pair{10, 863},  BatchedAdditive::Pair{2, 215},
      BatchedAdditive::Pair{12, 863},  BatchedAdditive::Pair{6, 431},
      BatchedAdditive::Pair{14, 863},  BatchedAdditive::Pair{0, 53},
      BatchedAdditive::Pair{16, 863},  BatchedAdditive::Pair{8, 431},
      BatchedAdditive::Pair{18, 863},  BatchedAdditive::Pair{4, 215},
      BatchedAdditive::Pair{20, 863},  BatchedAdditive::Pair{10, 431},
      BatchedAdditive::Pair{22, 863},  BatchedAdditive::Pair{2, 107},
      BatchedAdditive::Pair{24, 863},  BatchedAdditive::Pair{12, 431},
      BatchedAdditive::Pair{26, 863},  BatchedAdditive::Pair{6, 215},
      BatchedAdditive::Pair{28, 863},  BatchedAdditive::Pair{14, 431},
      BatchedAdditive::Pair{0, 893},   BatchedAdditive::Pair{383, 63},
      BatchedAdditive::Pair{383, 512}, BatchedAdditive::Pair{383, 513},
      BatchedAdditive::Pair{0, 897},   BatchedAdditive::Pair{383, 515},
      BatchedAdditive::Pair{0, 899},   BatchedAdditive::Pair{0, 449},
      BatchedAdditive::Pair{2, 899},   BatchedAdditive::Pair{383, 519},
      BatchedAdditive::Pair{0, 903},   BatchedAdditive::Pair{0, 451},
      BatchedAdditive::Pair{2, 903},   BatchedAdditive::Pair{0, 225},
      BatchedAdditive::Pair{4, 903},   BatchedAdditive::Pair{2, 451},
      BatchedAdditive::Pair{6, 903},   BatchedAdditive::Pair{383, 527},
      BatchedAdditive::Pair{0, 911},   BatchedAdditive::Pair{0, 455},
      BatchedAdditive::Pair{2, 911},   BatchedAdditive::Pair{0, 227},
      BatchedAdditive::Pair{4, 911},   BatchedAdditive::Pair{2, 455},
      BatchedAdditive::Pair{6, 911},   BatchedAdditive::Pair{0, 113},
      BatchedAdditive::Pair{8, 911},   BatchedAdditive::Pair{4, 455},
      BatchedAdditive::Pair{10, 911},  BatchedAdditive::Pair{2, 227},
      BatchedAdditive::Pair{12, 911},  BatchedAdditive::Pair{6, 455},
      BatchedAdditive::Pair{14, 911},  BatchedAdditive::Pair{383, 543},
      BatchedAdditive::Pair{0, 927},   BatchedAdditive::Pair{0, 463},
      BatchedAdditive::Pair{2, 927},   BatchedAdditive::Pair{0, 231},
      BatchedAdditive::Pair{4, 927},   BatchedAdditive::Pair{2, 463},
      BatchedAdditive::Pair{6, 927},   BatchedAdditive::Pair{0, 115},
      BatchedAdditive::Pair{8, 927},   BatchedAdditive::Pair{4, 463},
      BatchedAdditive::Pair{10, 927},  BatchedAdditive::Pair{2, 231},
      BatchedAdditive::Pair{12, 927},  BatchedAdditive::Pair{6, 463},
      BatchedAdditive::Pair{14, 927},  BatchedAdditive::Pair{0, 57},
      BatchedAdditive::Pair{16, 927},  BatchedAdditive::Pair{8, 463},
      BatchedAdditive::Pair{18, 927},  BatchedAdditive::Pair{4, 231},
      BatchedAdditive::Pair{20, 927},  BatchedAdditive::Pair{10, 463},
      BatchedAdditive::Pair{22, 927},  BatchedAdditive::Pair{2, 115},
      BatchedAdditive::Pair{24, 927},  BatchedAdditive::Pair{12, 463},
      BatchedAdditive::Pair{26, 927},  BatchedAdditive::Pair{6, 231},
      BatchedAdditive::Pair{28, 927},  BatchedAdditive::Pair{14, 463},
      BatchedAdditive::Pair{0, 957},   BatchedAdditive::Pair{383, 575},
      BatchedAdditive::Pair{0, 959},   BatchedAdditive::Pair{0, 479},
      BatchedAdditive::Pair{2, 959},   BatchedAdditive::Pair{0, 239},
      BatchedAdditive::Pair{4, 959},   BatchedAdditive::Pair{2, 479},
      BatchedAdditive::Pair{6, 959},   BatchedAdditive::Pair{0, 119},
      BatchedAdditive::Pair{8, 959},   BatchedAdditive::Pair{4, 479},
      BatchedAdditive::Pair{10, 959},  BatchedAdditive::Pair{2, 239},
      BatchedAdditive::Pair{12, 959},  BatchedAdditive::Pair{6, 479},
      BatchedAdditive::Pair{14, 959},  BatchedAdditive::Pair{0, 59},
      BatchedAdditive::Pair{16, 959},  BatchedAdditive::Pair{8, 479},
      BatchedAdditive::Pair{18, 959},  BatchedAdditive::Pair{4, 239},
      BatchedAdditive::Pair{20, 959},  BatchedAdditive::Pair{10, 479},
      BatchedAdditive::Pair{22, 959},  BatchedAdditive::Pair{2, 119},
      BatchedAdditive::Pair{24, 959},  BatchedAdditive::Pair{12, 479},
      BatchedAdditive::Pair{26, 959},  BatchedAdditive::Pair{6, 239},
      BatchedAdditive::Pair{28, 959},  BatchedAdditive::Pair{14, 479},
      BatchedAdditive::Pair{0, 989},   BatchedAdditive::Pair{0, 29},
      BatchedAdditive::Pair{32, 959},  BatchedAdditive::Pair{16, 479},
      BatchedAdditive::Pair{34, 959},  BatchedAdditive::Pair{8, 239},
      BatchedAdditive::Pair{36, 959},  BatchedAdditive::Pair{18, 479},
      BatchedAdditive::Pair{38, 959},  BatchedAdditive::Pair{4, 119},
      BatchedAdditive::Pair{40, 959},  BatchedAdditive::Pair{20, 479},
      BatchedAdditive::Pair{42, 959},  BatchedAdditive::Pair{10, 239},
      BatchedAdditive::Pair{44, 959},  BatchedAdditive::Pair{22, 479},
      BatchedAdditive::Pair{0, 1005},  BatchedAdditive::Pair{2, 59},
      BatchedAdditive::Pair{48, 959},  BatchedAdditive::Pair{24, 479},
      BatchedAdditive::Pair{50, 959},  BatchedAdditive::Pair{12, 239},
      BatchedAdditive::Pair{52, 959},  BatchedAdditive::Pair{26, 479},
      BatchedAdditive::Pair{0, 1013},  BatchedAdditive::Pair{6, 119},
      BatchedAdditive::Pair{56, 959},  BatchedAdditive::Pair{28, 479},
      BatchedAdditive::Pair{0, 1017},  BatchedAdditive::Pair{14, 239},
      BatchedAdditive::Pair{0, 1019},  BatchedAdditive::Pair{0, 509},
      BatchedAdditive::Pair{2, 1019},  BatchedAdditive::Pair{0, 0}};

  return BatchedAdditive::Batched(arr, pairs);

  /*
  std::array<int, BatchedAdditive::entries> arr{};
  std::array<BatchedAdditive::Pair, BatchedAdditive::entries> pairs{};

  for (unsigned i = 0; i < BatchedAdditive::entries; i++) {
    arr[i] = -1;
  }

  for (unsigned i = 1; i <= BatchedAdditive::entries; i *= 2) {
    arr[i - 1] = 0;
  }

  auto iter_count = 0;
  bool is_done = false;
  do {
    ++iter_count;
    for (unsigned i = 0; i < BatchedAdditive::entries; i++) {
      for (unsigned j = i + 1; j < BatchedAdditive::entries; j++) {
        if (arr[i] == -1 || arr[j] == -1) {
          // Invalid combination, skip
          continue;
        }

        // i + j + 2 is the power of h we'd produce in this iteration, stored
        // at i + j + 1. To see this, take i = 0, j = 1: arr[0] corresponds to
        // h^1, arr[1] to h^2: their product is h^3, which lives at arr[2].
        auto pos = i + j + 1;

        // Obviously, some of these will be OOB
        if (pos >= BatchedAdditive::entries) {
          continue;
        }
        if (arr[pos] != -1) {
          // Already allocated
          continue;
        }

        while (pos < BatchedAdditive::entries) {
          if (arr[pos] == -1) {
            arr[pos] = iter_count;
            pairs[pos] = {i, j};
          }
          pos = 2 * pos + 1;
        }
      }
    }

    is_done = true;
    for (unsigned i = 0; i < BatchedAdditive::entries; i++) {
      if (arr[i] == -1) {
        is_done = false;
        break;
      }
    }
  } while (!is_done);

  return BatchedAdditive::Batched(arr, pairs);
  */
}

constexpr unsigned BatchedAdditive::max_value_in_batch() {
  constexpr auto batch = BatchedAdditive::generate_batch();
  return static_cast<unsigned>(
      *std::max_element(batch.iter_pos.cbegin(), batch.iter_pos.cend()));
}

template <unsigned iter_count, typename F>
constexpr void BatchedAdditive::iterate_over_iters_and_pairs(F &&func) {
  static_assert(iter_count <= BatchedAdditive::max_value_in_batch(),
                "Err: iter_count too large!");
  constexpr auto batch = BatchedAdditive::generate_batch();
  for (unsigned i = 0; i < BatchedAdditive::entries; i++) {
    auto v = static_cast<unsigned>(batch.iter_pos[i]);
    if (v == iter_count) {
      auto first = batch.pairs[i].first;
      auto sec = batch.pairs[i].second;
      func(static_cast<unsigned>(first), static_cast<unsigned>(sec), i);
    }
  }
}

template <unsigned iter_count, bool unique>
constexpr std::array<int, BatchedAdditive::entries>
BatchedAdditive::get_inputs_used() {

  std::array<int, BatchedAdditive::entries> entries{};
  auto func = [&](unsigned first, unsigned sec, unsigned) {
    entries[first] = (unique) ? 1 : entries[first] + 1;
    entries[sec] = (unique) ? 1 : entries[sec] + 1;
  };

  iterate_over_iters_and_pairs<iter_count>(func);
  return entries;
}

template <unsigned iter_count, bool unique>
constexpr unsigned BatchedAdditive::number_of_inputs() {
  constexpr auto entries =
      BatchedAdditive::get_inputs_used<iter_count, unique>();
  unsigned total{};
  // std::accumulate is not constexpr til C++20
  for (const auto v : entries) {
    total += static_cast<unsigned>(v);
  }
  return total;
}

// The inputs for each round are the number of unique entries that are produced
// in the "pairs" array for each round. This works because we have a strict
// sequential dependency.
template <unsigned iter_count>
constexpr unsigned BatchedAdditive::number_of_unique_inputs() {
  return BatchedAdditive::number_of_inputs<iter_count, true>();
}

template <unsigned iter_count>
constexpr unsigned BatchedAdditive::number_of_total_inputs() {
  return BatchedAdditive::number_of_inputs<iter_count, false>();
}

template <unsigned iter_count, bool return_total>
constexpr auto BatchedAdditive::unique_outputs_impl() {
  unsigned total{};
  std::array<int, BatchedAdditive::entries> outputs{};
  auto func = [&](unsigned, unsigned, unsigned iter) {
    if (iter % 2 == 0) {
      // Always allocate odd outputs
      outputs[iter] = 1;
      total += 1;
      return;
    }

    // If the output is even, then we need to do one of two things.
    // Either it's not a square (i.e if outputs[iter / 2] == 0) or
    // it's a square (i.e. if outputs[iter / 2] != 0).
    if (outputs[iter / 2] == 0) {
      outputs[iter] = 1;
      total += 1;
      return;
    }

    outputs[iter] = 2;
  };

  iterate_over_iters_and_pairs<iter_count>(func);
  if constexpr (return_total) {
    return total;
  } else if constexpr (!return_total) {
    return outputs;
  }
}

template <unsigned iter_count>
constexpr unsigned BatchedAdditive::number_of_unique_outputs() {
  return BatchedAdditive::unique_outputs_impl<iter_count, true>();
}

template <unsigned iter_count>
constexpr auto BatchedAdditive::get_unique_inputs() {
  static_assert(iter_count <= BatchedAdditive::max_value_in_batch(),
                "Err: iter_count too large!");
  std::array<int, BatchedAdditive::number_of_unique_inputs<iter_count>()> arr{};
  constexpr auto entries = BatchedAdditive::get_inputs_used<iter_count, true>();
  unsigned pos{};
  for (unsigned i = 0; i < entries.size(); i++) {
    if (entries[i]) {
      arr[pos++] = static_cast<int>(i);
    }
  }

  return arr;
}

template <unsigned iter_count>
constexpr auto BatchedAdditive::get_unique_outputs() {
  const auto outputs =
      BatchedAdditive::unique_outputs_impl<iter_count, false>();
  std::array<int, BatchedAdditive::number_of_unique_outputs<iter_count>()>
      arr{};
  unsigned pos{};
  for (unsigned i = 0; i < BatchedAdditive::entries; i++) {
    if (outputs[i] == 1) {
      arr[pos++] = static_cast<int>(i);
    }
  }
  return arr;
}

template <unsigned iter_count>
constexpr auto BatchedAdditive::get_input_positions() {
  constexpr auto outputs =
      BatchedAdditive::template get_unique_outputs<iter_count>();
  std::array<int, BatchedAdditive::entries> ind_pos{};
  for (auto &v : ind_pos) {
    v = -1;
  }

  constexpr auto batch = BatchedAdditive::generate_batch();
  std::array<BatchedAdditive::Pair,
             BatchedAdditive::template number_of_unique_outputs<iter_count>()>
      pair_pos{};

  static_assert(pair_pos.size() == outputs.size(),
                "Err: expected number of outputs to be the same");
  int pos{};

  for (unsigned i = 0; i < pair_pos.size(); i++) {
    const auto v = outputs[i];
    // We know for certain that all values in outputs are output in this
    // iteration ingoring squaring. Thus, we just need to map the inputs
    // appropriately.
    const auto pair = batch.pairs[static_cast<unsigned>(v)];
    const auto first = static_cast<unsigned>(pair.first);
    const auto second = static_cast<unsigned>(pair.second);

    if (ind_pos[first] == -1) {
      ind_pos[first] = pos;
      ++pos;
    }

    if (ind_pos[second] == -1) {
      ind_pos[second] = pos;
      ++pos;
    }

    pair_pos[i] = BatchedAdditive::Pair{ind_pos[first], ind_pos[second]};
  }

  return pair_pos;
}
