#include "../include/GraphAlgorithms.h"

namespace s21 {

GraphAlgorithms::GraphAlgorithmsError::GraphAlgorithmsError(
    const std::string &arg)
    : std::runtime_error(arg) {}

GraphAlgorithms::VertexIsOutOfRange::VertexIsOutOfRange(const std::string &arg)
    : GraphAlgorithms::GraphAlgorithmsError(arg) {}

GraphAlgorithms::NoSolution::NoSolution(const std::string &arg)
    : GraphAlgorithms::GraphAlgorithmsError(arg) {}

int GraphAlgorithms::validateVertex(const Graph &graph, int start_vertex) {
  if (start_vertex < 1 || start_vertex > (int)graph.size()) {
    throw GraphAlgorithms::VertexIsOutOfRange(
        "Vertex for algorithm "
        "should be in range [1; vertices count]");
  }
  return start_vertex - 1;
}

} // namespace s21