/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Summary status for ad group
    /// </summary>
    /// <value>Summary status for ad group</value>
    
    [JsonConverter(typeof(StringEnumConverter))]
    
    public enum AdGroupSummaryStatus
    {
        /// <summary>
        /// Enum RUNNING for value: RUNNING
        /// </summary>
        [EnumMember(Value = "RUNNING")]
        RUNNING = 1,

        /// <summary>
        /// Enum PAUSED for value: PAUSED
        /// </summary>
        [EnumMember(Value = "PAUSED")]
        PAUSED = 2,

        /// <summary>
        /// Enum NOTSTARTED for value: NOT_STARTED
        /// </summary>
        [EnumMember(Value = "NOT_STARTED")]
        NOTSTARTED = 3,

        /// <summary>
        /// Enum COMPLETED for value: COMPLETED
        /// </summary>
        [EnumMember(Value = "COMPLETED")]
        COMPLETED = 4,

        /// <summary>
        /// Enum ADVERTISERDISABLED for value: ADVERTISER_DISABLED
        /// </summary>
        [EnumMember(Value = "ADVERTISER_DISABLED")]
        ADVERTISERDISABLED = 5,

        /// <summary>
        /// Enum ARCHIVED for value: ARCHIVED
        /// </summary>
        [EnumMember(Value = "ARCHIVED")]
        ARCHIVED = 6

    }

}
