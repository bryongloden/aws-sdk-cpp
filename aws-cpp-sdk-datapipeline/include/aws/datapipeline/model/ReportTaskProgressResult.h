﻿/*
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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of ReportTaskProgress.</p>
   */
  class AWS_DATAPIPELINE_API ReportTaskProgressResult
  {
  public:
    ReportTaskProgressResult();
    ReportTaskProgressResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ReportTaskProgressResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>If true, the calling task runner should cancel processing of the task. The
     * task runner does not need to call <a>SetTaskStatus</a> for canceled tasks.</p>
     */
    inline bool GetCanceled() const{ return m_canceled; }

    /**
     * <p>If true, the calling task runner should cancel processing of the task. The
     * task runner does not need to call <a>SetTaskStatus</a> for canceled tasks.</p>
     */
    inline void SetCanceled(bool value) { m_canceled = value; }

    /**
     * <p>If true, the calling task runner should cancel processing of the task. The
     * task runner does not need to call <a>SetTaskStatus</a> for canceled tasks.</p>
     */
    inline ReportTaskProgressResult& WithCanceled(bool value) { SetCanceled(value); return *this;}

  private:
    bool m_canceled;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
