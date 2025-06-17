//
// Created by max on 6/17/25.
//

#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

void write_color(std::ostream& out, const color& color) {
  auto r = color.x();
  auto g = color.y();
  auto b = color.z();

  // Translate the [0, 1] componenet values to the byte range [0, 255]
  int rbyte = int(255.999 * r);
  int gbyte = int(255.999 * g);
  int bbyte = int(255.999 * b);

  // Write out the pixel color components
  out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif //COLOR_H
