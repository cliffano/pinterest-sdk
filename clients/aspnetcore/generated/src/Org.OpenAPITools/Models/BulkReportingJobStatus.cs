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
        /// Possible status for a bulk reporting job
        /// </summary>
        /// <value>Possible status for a bulk reporting job</value>
        [TypeConverter(typeof(CustomEnumConverter<BulkReportingJobStatus>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum BulkReportingJobStatus
        {
            
            /// <summary>
            /// Enum DOESNOTEXISTEnum for DOES_NOT_EXIST
            /// </summary>
            [EnumMember(Value = "DOES_NOT_EXIST")]
            DOESNOTEXISTEnum = 1,
            
            /// <summary>
            /// Enum FINISHEDEnum for FINISHED
            /// </summary>
            [EnumMember(Value = "FINISHED")]
            FINISHEDEnum = 2,
            
            /// <summary>
            /// Enum INPROGRESSEnum for IN_PROGRESS
            /// </summary>
            [EnumMember(Value = "IN_PROGRESS")]
            INPROGRESSEnum = 3,
            
            /// <summary>
            /// Enum EXPIREDEnum for EXPIRED
            /// </summary>
            [EnumMember(Value = "EXPIRED")]
            EXPIREDEnum = 4,
            
            /// <summary>
            /// Enum FAILEDEnum for FAILED
            /// </summary>
            [EnumMember(Value = "FAILED")]
            FAILEDEnum = 5,
            
            /// <summary>
            /// Enum CANCELLEDEnum for CANCELLED
            /// </summary>
            [EnumMember(Value = "CANCELLED")]
            CANCELLEDEnum = 6
        }
}
