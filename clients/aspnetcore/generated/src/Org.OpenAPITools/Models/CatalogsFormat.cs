/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
        /// The file format of a feed.
        /// </summary>
        /// <value>The file format of a feed.</value>
        [TypeConverter(typeof(CustomEnumConverter<CatalogsFormat>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum CatalogsFormat
        {
            
            /// <summary>
            /// Enum TSVEnum for TSV
            /// </summary>
            [EnumMember(Value = "TSV")]
            TSVEnum = 1,
            
            /// <summary>
            /// Enum CSVEnum for CSV
            /// </summary>
            [EnumMember(Value = "CSV")]
            CSVEnum = 2,
            
            /// <summary>
            /// Enum XMLEnum for XML
            /// </summary>
            [EnumMember(Value = "XML")]
            XMLEnum = 3
        }
}
