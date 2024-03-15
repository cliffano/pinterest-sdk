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
    /// CampaignCreateResponseItem
    /// </summary>
    [DataContract(Name = "CampaignCreateResponseItem")]
    public partial class CampaignCreateResponseItem : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CampaignCreateResponseItem" /> class.
        /// </summary>
        /// <param name="data">data.</param>
        /// <param name="exceptions">exceptions.</param>
        public CampaignCreateResponseItem(CampaignCreateResponseData data = default(CampaignCreateResponseData), List<Exception> exceptions = default(List<Exception>))
        {
            this.Data = data;
            this.Exceptions = exceptions;
        }

        /// <summary>
        /// Gets or Sets Data
        /// </summary>
        [DataMember(Name = "data", EmitDefaultValue = false)]
        public CampaignCreateResponseData Data { get; set; }

        /// <summary>
        /// Gets or Sets Exceptions
        /// </summary>
        [DataMember(Name = "exceptions", EmitDefaultValue = false)]
        public List<Exception> Exceptions { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CampaignCreateResponseItem {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  Exceptions: ").Append(Exceptions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
