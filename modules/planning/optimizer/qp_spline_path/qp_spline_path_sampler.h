/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file qp_spline_path_sampler.h
 **/

#ifndef MODULES_PLANNING_OPTIMIZER_QP_SPLINE_PATH_QP_SPLINE_PATH_SAMPLER_H_
#define MODULES_PLANNING_OPTIMIZER_QP_SPLINE_PATH_QP_SPLINE_PATH_SAMPLER_H_

#include "modules/common/proto/path_point.pb.h"
#include "modules/planning/proto/qp_spline_path_config.pb.h"

#include "modules/planning/reference_line/reference_line.h"

namespace apollo {
namespace planning {

class QpSplinePathSampler {
 public:
  explicit QpSplinePathSampler(const QPSplinePathConfig& config);
  bool Sample(const common::FrenetFramePoint& init_point,
              const ReferenceLine& reference_line, const double s_lower_bound,
              const double s_upper_bound,
              std::vector<double>* const sampling_point);

 private:
  const QPSplinePathConfig config_;
};

}  // namespace planning
}  // namespace apollo

#endif  // MODULES_PLANNING_OPTIMIZER_QP_SPLINE_PATH_QP_SPLINE_PATH_SAMPLER_H_
