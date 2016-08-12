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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/ArtifactType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the output of a test. Examples of artifacts include logs and
   * screenshots.</p>
   */
  class AWS_DEVICEFARM_API Artifact
  {
  public:
    Artifact();
    Artifact(const Aws::Utils::Json::JsonValue& jsonValue);
    Artifact& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The artifact's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The artifact's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The artifact's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The artifact's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The artifact's ARN.</p>
     */
    inline Artifact& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The artifact's ARN.</p>
     */
    inline Artifact& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The artifact's ARN.</p>
     */
    inline Artifact& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The artifact's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The artifact's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The artifact's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The artifact's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The artifact's name.</p>
     */
    inline Artifact& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The artifact's name.</p>
     */
    inline Artifact& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The artifact's name.</p>
     */
    inline Artifact& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The artifact's type.</p> <p>Allowed values include the following:</p> <ul>
     * <li><p>UNKNOWN: An unknown type.</p></li> <li><p>SCREENSHOT: The screenshot
     * type.</p></li> <li><p>DEVICE_LOG: The device log type.</p></li>
     * <li><p>MESSAGE_LOG: The message log type.</p></li> <li><p>RESULT_LOG: The result
     * log type.</p></li> <li><p>SERVICE_LOG: The service log type.</p></li>
     * <li><p>WEBKIT_LOG: The web kit log type.</p></li> <li><p>INSTRUMENTATION_OUTPUT:
     * The instrumentation type.</p></li> <li><p>EXERCISER_MONKEY_OUTPUT: For Android,
     * the artifact (log) generated by an Android fuzz test.</p></li>
     * <li><p>CALABASH_JSON_OUTPUT: The Calabash JSON output type.</p></li>
     * <li><p>CALABASH_PRETTY_OUTPUT: The Calabash pretty output type.</p></li>
     * <li><p>CALABASH_STANDARD_OUTPUT: The Calabash standard output type.</p></li>
     * <li><p>CALABASH_JAVA_XML_OUTPUT: The Calabash Java XML output type.</p></li>
     * <li><p>AUTOMATION_OUTPUT: The automation output type.</p></li>
     * <li><p>APPIUM_SERVER_OUTPUT: The Appium server output type.</p></li>
     * <li><p>APPIUM_JAVA_OUTPUT: The Appium Java output type.</p></li>
     * <li><p>APPIUM_JAVA_XML_OUTPUT: The Appium Java XML output type.</p></li>
     * <li><p>APPIUM_PYTHON_OUTPUT: The Appium Python output type.</p></li>
     * <li><p>APPIUM_PYTHON_XML_OUTPUT: The Appium Python XML output type.</p></li>
     * <li><p>EXPLORER_EVENT_LOG: The Explorer event log output type.</p></li>
     * <li><p>EXPLORER_SUMMARY_LOG: The Explorer summary log output type.</p></li>
     * <li><p>APPLICATION_CRASH_REPORT: The application crash report output
     * type.</p></li> <li><p>XCTEST_LOG: The XCode test output type.</p></li> </ul>
     */
    inline const ArtifactType& GetType() const{ return m_type; }

    /**
     * <p>The artifact's type.</p> <p>Allowed values include the following:</p> <ul>
     * <li><p>UNKNOWN: An unknown type.</p></li> <li><p>SCREENSHOT: The screenshot
     * type.</p></li> <li><p>DEVICE_LOG: The device log type.</p></li>
     * <li><p>MESSAGE_LOG: The message log type.</p></li> <li><p>RESULT_LOG: The result
     * log type.</p></li> <li><p>SERVICE_LOG: The service log type.</p></li>
     * <li><p>WEBKIT_LOG: The web kit log type.</p></li> <li><p>INSTRUMENTATION_OUTPUT:
     * The instrumentation type.</p></li> <li><p>EXERCISER_MONKEY_OUTPUT: For Android,
     * the artifact (log) generated by an Android fuzz test.</p></li>
     * <li><p>CALABASH_JSON_OUTPUT: The Calabash JSON output type.</p></li>
     * <li><p>CALABASH_PRETTY_OUTPUT: The Calabash pretty output type.</p></li>
     * <li><p>CALABASH_STANDARD_OUTPUT: The Calabash standard output type.</p></li>
     * <li><p>CALABASH_JAVA_XML_OUTPUT: The Calabash Java XML output type.</p></li>
     * <li><p>AUTOMATION_OUTPUT: The automation output type.</p></li>
     * <li><p>APPIUM_SERVER_OUTPUT: The Appium server output type.</p></li>
     * <li><p>APPIUM_JAVA_OUTPUT: The Appium Java output type.</p></li>
     * <li><p>APPIUM_JAVA_XML_OUTPUT: The Appium Java XML output type.</p></li>
     * <li><p>APPIUM_PYTHON_OUTPUT: The Appium Python output type.</p></li>
     * <li><p>APPIUM_PYTHON_XML_OUTPUT: The Appium Python XML output type.</p></li>
     * <li><p>EXPLORER_EVENT_LOG: The Explorer event log output type.</p></li>
     * <li><p>EXPLORER_SUMMARY_LOG: The Explorer summary log output type.</p></li>
     * <li><p>APPLICATION_CRASH_REPORT: The application crash report output
     * type.</p></li> <li><p>XCTEST_LOG: The XCode test output type.</p></li> </ul>
     */
    inline void SetType(const ArtifactType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The artifact's type.</p> <p>Allowed values include the following:</p> <ul>
     * <li><p>UNKNOWN: An unknown type.</p></li> <li><p>SCREENSHOT: The screenshot
     * type.</p></li> <li><p>DEVICE_LOG: The device log type.</p></li>
     * <li><p>MESSAGE_LOG: The message log type.</p></li> <li><p>RESULT_LOG: The result
     * log type.</p></li> <li><p>SERVICE_LOG: The service log type.</p></li>
     * <li><p>WEBKIT_LOG: The web kit log type.</p></li> <li><p>INSTRUMENTATION_OUTPUT:
     * The instrumentation type.</p></li> <li><p>EXERCISER_MONKEY_OUTPUT: For Android,
     * the artifact (log) generated by an Android fuzz test.</p></li>
     * <li><p>CALABASH_JSON_OUTPUT: The Calabash JSON output type.</p></li>
     * <li><p>CALABASH_PRETTY_OUTPUT: The Calabash pretty output type.</p></li>
     * <li><p>CALABASH_STANDARD_OUTPUT: The Calabash standard output type.</p></li>
     * <li><p>CALABASH_JAVA_XML_OUTPUT: The Calabash Java XML output type.</p></li>
     * <li><p>AUTOMATION_OUTPUT: The automation output type.</p></li>
     * <li><p>APPIUM_SERVER_OUTPUT: The Appium server output type.</p></li>
     * <li><p>APPIUM_JAVA_OUTPUT: The Appium Java output type.</p></li>
     * <li><p>APPIUM_JAVA_XML_OUTPUT: The Appium Java XML output type.</p></li>
     * <li><p>APPIUM_PYTHON_OUTPUT: The Appium Python output type.</p></li>
     * <li><p>APPIUM_PYTHON_XML_OUTPUT: The Appium Python XML output type.</p></li>
     * <li><p>EXPLORER_EVENT_LOG: The Explorer event log output type.</p></li>
     * <li><p>EXPLORER_SUMMARY_LOG: The Explorer summary log output type.</p></li>
     * <li><p>APPLICATION_CRASH_REPORT: The application crash report output
     * type.</p></li> <li><p>XCTEST_LOG: The XCode test output type.</p></li> </ul>
     */
    inline void SetType(ArtifactType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The artifact's type.</p> <p>Allowed values include the following:</p> <ul>
     * <li><p>UNKNOWN: An unknown type.</p></li> <li><p>SCREENSHOT: The screenshot
     * type.</p></li> <li><p>DEVICE_LOG: The device log type.</p></li>
     * <li><p>MESSAGE_LOG: The message log type.</p></li> <li><p>RESULT_LOG: The result
     * log type.</p></li> <li><p>SERVICE_LOG: The service log type.</p></li>
     * <li><p>WEBKIT_LOG: The web kit log type.</p></li> <li><p>INSTRUMENTATION_OUTPUT:
     * The instrumentation type.</p></li> <li><p>EXERCISER_MONKEY_OUTPUT: For Android,
     * the artifact (log) generated by an Android fuzz test.</p></li>
     * <li><p>CALABASH_JSON_OUTPUT: The Calabash JSON output type.</p></li>
     * <li><p>CALABASH_PRETTY_OUTPUT: The Calabash pretty output type.</p></li>
     * <li><p>CALABASH_STANDARD_OUTPUT: The Calabash standard output type.</p></li>
     * <li><p>CALABASH_JAVA_XML_OUTPUT: The Calabash Java XML output type.</p></li>
     * <li><p>AUTOMATION_OUTPUT: The automation output type.</p></li>
     * <li><p>APPIUM_SERVER_OUTPUT: The Appium server output type.</p></li>
     * <li><p>APPIUM_JAVA_OUTPUT: The Appium Java output type.</p></li>
     * <li><p>APPIUM_JAVA_XML_OUTPUT: The Appium Java XML output type.</p></li>
     * <li><p>APPIUM_PYTHON_OUTPUT: The Appium Python output type.</p></li>
     * <li><p>APPIUM_PYTHON_XML_OUTPUT: The Appium Python XML output type.</p></li>
     * <li><p>EXPLORER_EVENT_LOG: The Explorer event log output type.</p></li>
     * <li><p>EXPLORER_SUMMARY_LOG: The Explorer summary log output type.</p></li>
     * <li><p>APPLICATION_CRASH_REPORT: The application crash report output
     * type.</p></li> <li><p>XCTEST_LOG: The XCode test output type.</p></li> </ul>
     */
    inline Artifact& WithType(const ArtifactType& value) { SetType(value); return *this;}

    /**
     * <p>The artifact's type.</p> <p>Allowed values include the following:</p> <ul>
     * <li><p>UNKNOWN: An unknown type.</p></li> <li><p>SCREENSHOT: The screenshot
     * type.</p></li> <li><p>DEVICE_LOG: The device log type.</p></li>
     * <li><p>MESSAGE_LOG: The message log type.</p></li> <li><p>RESULT_LOG: The result
     * log type.</p></li> <li><p>SERVICE_LOG: The service log type.</p></li>
     * <li><p>WEBKIT_LOG: The web kit log type.</p></li> <li><p>INSTRUMENTATION_OUTPUT:
     * The instrumentation type.</p></li> <li><p>EXERCISER_MONKEY_OUTPUT: For Android,
     * the artifact (log) generated by an Android fuzz test.</p></li>
     * <li><p>CALABASH_JSON_OUTPUT: The Calabash JSON output type.</p></li>
     * <li><p>CALABASH_PRETTY_OUTPUT: The Calabash pretty output type.</p></li>
     * <li><p>CALABASH_STANDARD_OUTPUT: The Calabash standard output type.</p></li>
     * <li><p>CALABASH_JAVA_XML_OUTPUT: The Calabash Java XML output type.</p></li>
     * <li><p>AUTOMATION_OUTPUT: The automation output type.</p></li>
     * <li><p>APPIUM_SERVER_OUTPUT: The Appium server output type.</p></li>
     * <li><p>APPIUM_JAVA_OUTPUT: The Appium Java output type.</p></li>
     * <li><p>APPIUM_JAVA_XML_OUTPUT: The Appium Java XML output type.</p></li>
     * <li><p>APPIUM_PYTHON_OUTPUT: The Appium Python output type.</p></li>
     * <li><p>APPIUM_PYTHON_XML_OUTPUT: The Appium Python XML output type.</p></li>
     * <li><p>EXPLORER_EVENT_LOG: The Explorer event log output type.</p></li>
     * <li><p>EXPLORER_SUMMARY_LOG: The Explorer summary log output type.</p></li>
     * <li><p>APPLICATION_CRASH_REPORT: The application crash report output
     * type.</p></li> <li><p>XCTEST_LOG: The XCode test output type.</p></li> </ul>
     */
    inline Artifact& WithType(ArtifactType&& value) { SetType(value); return *this;}

    /**
     * <p>The artifact's file extension.</p>
     */
    inline const Aws::String& GetExtension() const{ return m_extension; }

    /**
     * <p>The artifact's file extension.</p>
     */
    inline void SetExtension(const Aws::String& value) { m_extensionHasBeenSet = true; m_extension = value; }

    /**
     * <p>The artifact's file extension.</p>
     */
    inline void SetExtension(Aws::String&& value) { m_extensionHasBeenSet = true; m_extension = value; }

    /**
     * <p>The artifact's file extension.</p>
     */
    inline void SetExtension(const char* value) { m_extensionHasBeenSet = true; m_extension.assign(value); }

    /**
     * <p>The artifact's file extension.</p>
     */
    inline Artifact& WithExtension(const Aws::String& value) { SetExtension(value); return *this;}

    /**
     * <p>The artifact's file extension.</p>
     */
    inline Artifact& WithExtension(Aws::String&& value) { SetExtension(value); return *this;}

    /**
     * <p>The artifact's file extension.</p>
     */
    inline Artifact& WithExtension(const char* value) { SetExtension(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URL that can be used with a corresponding GET
     * request to download the artifact's file.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The pre-signed Amazon S3 URL that can be used with a corresponding GET
     * request to download the artifact's file.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The pre-signed Amazon S3 URL that can be used with a corresponding GET
     * request to download the artifact's file.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The pre-signed Amazon S3 URL that can be used with a corresponding GET
     * request to download the artifact's file.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The pre-signed Amazon S3 URL that can be used with a corresponding GET
     * request to download the artifact's file.</p>
     */
    inline Artifact& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URL that can be used with a corresponding GET
     * request to download the artifact's file.</p>
     */
    inline Artifact& WithUrl(Aws::String&& value) { SetUrl(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URL that can be used with a corresponding GET
     * request to download the artifact's file.</p>
     */
    inline Artifact& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ArtifactType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_extension;
    bool m_extensionHasBeenSet;
    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
