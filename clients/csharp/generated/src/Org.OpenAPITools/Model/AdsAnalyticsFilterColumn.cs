/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
    /// Reporting columns for sync reporting data filter
    /// </summary>
    /// <value>Reporting columns for sync reporting data filter</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum AdsAnalyticsFilterColumn
    {
        /// <summary>
        /// Enum SPENDINDOLLAR for value: SPEND_IN_DOLLAR
        /// </summary>
        [EnumMember(Value = "SPEND_IN_DOLLAR")]
        SPENDINDOLLAR = 1,

        /// <summary>
        /// Enum TOTALIMPRESSION for value: TOTAL_IMPRESSION
        /// </summary>
        [EnumMember(Value = "TOTAL_IMPRESSION")]
        TOTALIMPRESSION = 2
    }

}
