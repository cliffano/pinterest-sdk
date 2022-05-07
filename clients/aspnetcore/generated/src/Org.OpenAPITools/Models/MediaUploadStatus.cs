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
        /// Media upload status
        /// </summary>
        /// <value>Media upload status</value>
        [TypeConverter(typeof(CustomEnumConverter<MediaUploadStatus>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum MediaUploadStatus
        {
            
            /// <summary>
            /// Enum RegisteredEnum for registered
            /// </summary>
            [EnumMember(Value = "registered")]
            RegisteredEnum = 1,
            
            /// <summary>
            /// Enum ProcessingEnum for processing
            /// </summary>
            [EnumMember(Value = "processing")]
            ProcessingEnum = 2,
            
            /// <summary>
            /// Enum SucceededEnum for succeeded
            /// </summary>
            [EnumMember(Value = "succeeded")]
            SucceededEnum = 3,
            
            /// <summary>
            /// Enum FailedEnum for failed
            /// </summary>
            [EnumMember(Value = "failed")]
            FailedEnum = 4
        }
}
