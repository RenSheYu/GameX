#include "GameX/utils/mesh.h"

namespace GameX {
Mesh::Mesh(const std::vector<Vertex> &vertices,
           const std::vector<uint32_t> &indices) {
  vertices_ = vertices;
  indices_ = indices;
}

Mesh::Mesh(const std::vector<glm::vec3> &positions,
           const std::vector<uint32_t> &indices,
           glm::vec3 color,
           glm::vec2 texCoord,
           glm::vec3 normal,
           glm::vec3 tangent) {
  vertices_.reserve(positions.size());
  for (const auto &position : positions) {
    vertices_.push_back({position, color, texCoord, normal, tangent});
  }
  indices_ = indices;
}
}  // namespace GameX
