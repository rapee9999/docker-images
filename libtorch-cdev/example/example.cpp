#include <torch/torch.h>
#include <iostream>

int main() {
    torch::Tensor tensor;
    tensor = torch::rand({2, 3});
    std::cout << tensor << std::endl;
    std::cout << "Hello Libtorch" << std::endl;
}