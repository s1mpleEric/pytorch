#pragma once

#include <torch/csrc/WindowsTorchApiMacro.h>

#include <torch/proto/storage.h>
#include <torch/proto/tensor.h>

#include <string>

namespace torch { namespace proto {

TORCH_API std::string version();

}} // torch::proto

