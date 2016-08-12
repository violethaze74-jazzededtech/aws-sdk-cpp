﻿
/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class DeliveryStatus
  {
    NOT_SET,
    Success,
    Failure,
    Not_Applicable
  };

namespace DeliveryStatusMapper
{
AWS_CONFIGSERVICE_API DeliveryStatus GetDeliveryStatusForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForDeliveryStatus(DeliveryStatus value);
} // namespace DeliveryStatusMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
