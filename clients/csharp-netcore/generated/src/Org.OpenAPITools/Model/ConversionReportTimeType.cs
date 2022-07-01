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
    /// Conversion report time type
    /// </summary>
    /// <value>Conversion report time type</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum ConversionReportTimeType
    {
        /// <summary>
        /// Enum ADACTION for value: TIME_OF_AD_ACTION
        /// </summary>
        [EnumMember(Value = "TIME_OF_AD_ACTION")]
        ADACTION = 1,

        /// <summary>
        /// Enum CONVERSION for value: TIME_OF_CONVERSION
        /// </summary>
        [EnumMember(Value = "TIME_OF_CONVERSION")]
        CONVERSION = 2

    }

}
