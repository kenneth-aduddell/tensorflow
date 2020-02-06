/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPILER_MLIR_LITE_LCE_PASSES_H_
#define TENSORFLOW_COMPILER_MLIR_LITE_LCE_PASSES_H_

#include "mlir/Pass/Pass.h"  // TF:llvm-project
#include "mlir/Pass/PassManager.h"  // TF:llvm-project

namespace mlir {
namespace TFL {

// Creates an instance of the TensorFlow dialect PrepareLCE pass.
std::unique_ptr<OpPassBase<FuncOp>> CreatePrepareLCEPass();

// Creates an instance of the TensorFlow dialect OptimizeLCE pass.
std::unique_ptr<OpPassBase<FuncOp>> CreateOptimizeLCEPass();

}  // namespace TFL
}  // namespace mlir

#endif  // TENSORFLOW_COMPILER_MLIR_LITE_LCE_PASSES_H_
