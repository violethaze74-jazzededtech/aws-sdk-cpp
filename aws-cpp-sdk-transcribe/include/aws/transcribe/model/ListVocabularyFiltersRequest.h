﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersRequest : public TranscribeServiceRequest
  {
  public:
    ListVocabularyFiltersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVocabularyFilters"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If the result of the previous request to <code>ListVocabularyFilters</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * collections.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous request to <code>ListVocabularyFilters</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * collections.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous request to <code>ListVocabularyFilters</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * collections.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous request to <code>ListVocabularyFilters</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * collections.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous request to <code>ListVocabularyFilters</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * collections.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous request to <code>ListVocabularyFilters</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * collections.</p>
     */
    inline ListVocabularyFiltersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous request to <code>ListVocabularyFilters</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * collections.</p>
     */
    inline ListVocabularyFiltersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous request to <code>ListVocabularyFilters</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * collections.</p>
     */
    inline ListVocabularyFiltersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of filters to return in each page of results. If there are
     * fewer results than the value you specify, only the actual results are returned.
     * If you do not specify a value, the default of 5 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of filters to return in each page of results. If there are
     * fewer results than the value you specify, only the actual results are returned.
     * If you do not specify a value, the default of 5 is used.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of filters to return in each page of results. If there are
     * fewer results than the value you specify, only the actual results are returned.
     * If you do not specify a value, the default of 5 is used.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of filters to return in each page of results. If there are
     * fewer results than the value you specify, only the actual results are returned.
     * If you do not specify a value, the default of 5 is used.</p>
     */
    inline ListVocabularyFiltersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters the response so that it only contains vocabulary filters whose name
     * contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Filters the response so that it only contains vocabulary filters whose name
     * contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Filters the response so that it only contains vocabulary filters whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Filters the response so that it only contains vocabulary filters whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Filters the response so that it only contains vocabulary filters whose name
     * contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Filters the response so that it only contains vocabulary filters whose name
     * contains the specified string.</p>
     */
    inline ListVocabularyFiltersRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Filters the response so that it only contains vocabulary filters whose name
     * contains the specified string.</p>
     */
    inline ListVocabularyFiltersRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Filters the response so that it only contains vocabulary filters whose name
     * contains the specified string.</p>
     */
    inline ListVocabularyFiltersRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
