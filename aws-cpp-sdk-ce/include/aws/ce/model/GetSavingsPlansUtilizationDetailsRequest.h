﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class AWS_COSTEXPLORER_API GetSavingsPlansUtilizationDetailsRequest : public CostExplorerRequest
  {
  public:
    GetSavingsPlansUtilizationDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSavingsPlansUtilizationDetails"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTIONS</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTIONS</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTIONS</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTIONS</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTIONS</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTIONS</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet;

    Expression m_filter;
    bool m_filterHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
