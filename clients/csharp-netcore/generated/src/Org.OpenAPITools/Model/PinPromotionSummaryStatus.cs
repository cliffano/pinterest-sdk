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
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Summary status for pin promotions
    /// </summary>
    /// <value>Summary status for pin promotions</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum PinPromotionSummaryStatus
    {
        /// <summary>
        /// Enum APPROVED for value: APPROVED
        /// </summary>
        [EnumMember(Value = "APPROVED")]
        APPROVED = 1,

        /// <summary>
        /// Enum PAUSED for value: PAUSED
        /// </summary>
        [EnumMember(Value = "PAUSED")]
        PAUSED = 2,

        /// <summary>
        /// Enum PENDING for value: PENDING
        /// </summary>
        [EnumMember(Value = "PENDING")]
        PENDING = 3,

        /// <summary>
        /// Enum REJECTED for value: REJECTED
        /// </summary>
        [EnumMember(Value = "REJECTED")]
        REJECTED = 4,

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
