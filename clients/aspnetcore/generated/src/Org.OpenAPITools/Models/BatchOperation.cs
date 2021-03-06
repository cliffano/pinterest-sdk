/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
        /// The operation performed by the batch
        /// </summary>
        /// <value>The operation performed by the batch</value>
        [TypeConverter(typeof(CustomEnumConverter<BatchOperation>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum BatchOperation
        {
            
            /// <summary>
            /// Enum UPDATEEnum for UPDATE
            /// </summary>
            [EnumMember(Value = "UPDATE")]
            UPDATEEnum = 1,
            
            /// <summary>
            /// Enum CREATEEnum for CREATE
            /// </summary>
            [EnumMember(Value = "CREATE")]
            CREATEEnum = 2,
            
            /// <summary>
            /// Enum UPSERTEnum for UPSERT
            /// </summary>
            [EnumMember(Value = "UPSERT")]
            UPSERTEnum = 3
        }
}
