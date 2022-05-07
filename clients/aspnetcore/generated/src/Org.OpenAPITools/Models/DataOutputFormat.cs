/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
        /// <summary>
        /// Format of generated report
        /// </summary>
        /// <value>Format of generated report</value>
        [TypeConverter(typeof(CustomEnumConverter<DataOutputFormat>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum DataOutputFormat
        {
            
            /// <summary>
            /// Enum JSONEnum for JSON
            /// </summary>
            [EnumMember(Value = "JSON")]
            JSONEnum = 1,
            
            /// <summary>
            /// Enum CSVEnum for CSV
            /// </summary>
            [EnumMember(Value = "CSV")]
            CSVEnum = 2
        }
}
