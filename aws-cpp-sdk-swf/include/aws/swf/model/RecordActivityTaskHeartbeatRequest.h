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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API RecordActivityTaskHeartbeatRequest : public SWFRequest
  {
  public:
    RecordActivityTaskHeartbeatRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results. </important>
     */
    inline const Aws::String& GetTaskToken() const{ return m_taskToken; }

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results. </important>
     */
    inline void SetTaskToken(const Aws::String& value) { m_taskTokenHasBeenSet = true; m_taskToken = value; }

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results. </important>
     */
    inline void SetTaskToken(Aws::String&& value) { m_taskTokenHasBeenSet = true; m_taskToken = value; }

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results. </important>
     */
    inline void SetTaskToken(const char* value) { m_taskTokenHasBeenSet = true; m_taskToken.assign(value); }

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results. </important>
     */
    inline RecordActivityTaskHeartbeatRequest& WithTaskToken(const Aws::String& value) { SetTaskToken(value); return *this;}

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results. </important>
     */
    inline RecordActivityTaskHeartbeatRequest& WithTaskToken(Aws::String&& value) { SetTaskToken(value); return *this;}

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results. </important>
     */
    inline RecordActivityTaskHeartbeatRequest& WithTaskToken(const char* value) { SetTaskToken(value); return *this;}

    /**
     * <p>If specified, contains details about the progress of the task.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>If specified, contains details about the progress of the task.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>If specified, contains details about the progress of the task.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>If specified, contains details about the progress of the task.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>If specified, contains details about the progress of the task.</p>
     */
    inline RecordActivityTaskHeartbeatRequest& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>If specified, contains details about the progress of the task.</p>
     */
    inline RecordActivityTaskHeartbeatRequest& WithDetails(Aws::String&& value) { SetDetails(value); return *this;}

    /**
     * <p>If specified, contains details about the progress of the task.</p>
     */
    inline RecordActivityTaskHeartbeatRequest& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:
    Aws::String m_taskToken;
    bool m_taskTokenHasBeenSet;
    Aws::String m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
