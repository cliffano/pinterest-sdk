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
    /// CatalogsFeedIngestionInfo
    /// </summary>
    [DataContract]
    public partial class CatalogsFeedIngestionInfo :  IEquatable<CatalogsFeedIngestionInfo>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedIngestionInfo" /> class.
        /// </summary>
        /// <param name="inStock">inStock.</param>
        /// <param name="outOfStock">outOfStock.</param>
        /// <param name="preorder">preorder.</param>
        public CatalogsFeedIngestionInfo(int inStock = default(int), int outOfStock = default(int), int preorder = default(int))
        {
            this.InStock = inStock;
            this.OutOfStock = outOfStock;
            this.Preorder = preorder;
        }

        /// <summary>
        /// Gets or Sets InStock
        /// </summary>
        [DataMember(Name="in_stock", EmitDefaultValue=false)]
        public int InStock { get; set; }

        /// <summary>
        /// Gets or Sets OutOfStock
        /// </summary>
        [DataMember(Name="out_of_stock", EmitDefaultValue=false)]
        public int OutOfStock { get; set; }

        /// <summary>
        /// Gets or Sets Preorder
        /// </summary>
        [DataMember(Name="preorder", EmitDefaultValue=false)]
        public int Preorder { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsFeedIngestionInfo {\n");
            sb.Append("  InStock: ").Append(InStock).Append("\n");
            sb.Append("  OutOfStock: ").Append(OutOfStock).Append("\n");
            sb.Append("  Preorder: ").Append(Preorder).Append("\n");
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
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as CatalogsFeedIngestionInfo);
        }

        /// <summary>
        /// Returns true if CatalogsFeedIngestionInfo instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsFeedIngestionInfo to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedIngestionInfo input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.InStock == input.InStock ||
                    (this.InStock != null &&
                    this.InStock.Equals(input.InStock))
                ) && 
                (
                    this.OutOfStock == input.OutOfStock ||
                    (this.OutOfStock != null &&
                    this.OutOfStock.Equals(input.OutOfStock))
                ) && 
                (
                    this.Preorder == input.Preorder ||
                    (this.Preorder != null &&
                    this.Preorder.Equals(input.Preorder))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.InStock != null)
                    hashCode = hashCode * 59 + this.InStock.GetHashCode();
                if (this.OutOfStock != null)
                    hashCode = hashCode * 59 + this.OutOfStock.GetHashCode();
                if (this.Preorder != null)
                    hashCode = hashCode * 59 + this.Preorder.GetHashCode();
                return hashCode;
            }
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
