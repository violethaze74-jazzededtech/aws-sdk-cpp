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
#include <aws/cloudsearch/model/DescribeExpressionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils;

DescribeExpressionsRequest::DescribeExpressionsRequest() : 
    m_domainNameHasBeenSet(false),
    m_expressionNamesHasBeenSet(false),
    m_deployed(false),
    m_deployedHasBeenSet(false)
{
}

Aws::String DescribeExpressionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeExpressions&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_expressionNamesHasBeenSet)
  {
    unsigned expressionNamesCount = 1;
    for(auto& item : m_expressionNames)
    {
      ss << "ExpressionNames.member." << expressionNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      expressionNamesCount++;
    }
  }

  if(m_deployedHasBeenSet)
  {
    ss << "Deployed=" << m_deployed << "&";
  }

  ss << "Version=2013-01-01";
  return ss.str();
}

