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
using JsonSubTypes;
using Swashbuckle.AspNetCore.Annotations;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// Object describing the catalogs items batch
    /// </summary>
    [DataContract]
    [JsonConverter(typeof(JsonSubtypes), "CatalogType")]
    [SwaggerDiscriminator("CatalogType")]
    [JsonSubtypes.KnownSubType(typeof(CatalogsHotelItemsBatch), "HOTEL")]
    [SwaggerSubType(typeof(CatalogsHotelItemsBatch), DiscriminatorValue =  "HOTEL")]
    [JsonSubtypes.KnownSubType(typeof(CatalogsRetailItemsBatch), "RETAIL")]
    [SwaggerSubType(typeof(CatalogsRetailItemsBatch), DiscriminatorValue =  "RETAIL")]
    public partial class CatalogsItemsBatch : IEquatable<CatalogsItemsBatch>
    {
        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [Required]
        [DataMember(Name="catalog_type", EmitDefaultValue=true)]
        public CatalogsType CatalogType { get; set; }

        /// <summary>
        /// Id of the catalogs items batch
        /// </summary>
        /// <value>Id of the catalogs items batch</value>
        /// <example>595953100599279259-66753b9bb65c46c49bd8503b27fecf9e</example>
        [DataMember(Name="batch_id", EmitDefaultValue=false)]
        public string BatchId { get; set; }

        /// <summary>
        /// Time of the batch creation: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD
        /// </summary>
        /// <value>Time of the batch creation: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD</value>
        /// <example>2020-01-01T20:10:40Z</example>
        [DataMember(Name="created_time", EmitDefaultValue=false)]
        public DateTime CreatedTime { get; set; }

        /// <summary>
        /// Time of the batch completion: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD
        /// </summary>
        /// <value>Time of the batch completion: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD</value>
        /// <example>2022-03-10T15:37:10Z</example>
        [DataMember(Name="completed_time", EmitDefaultValue=true)]
        public DateTime? CompletedTime { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=true)]
        public BatchOperationStatus Status { get; set; }

        /// <summary>
        /// Array with the catalogs items processing records part of the catalogs items batch
        /// </summary>
        /// <value>Array with the catalogs items processing records part of the catalogs items batch</value>
        [DataMember(Name="items", EmitDefaultValue=false)]
        public List<HotelProcessingRecord> Items { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsItemsBatch {\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
            sb.Append("  BatchId: ").Append(BatchId).Append("\n");
            sb.Append("  CreatedTime: ").Append(CreatedTime).Append("\n");
            sb.Append("  CompletedTime: ").Append(CompletedTime).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((CatalogsItemsBatch)obj);
        }

        /// <summary>
        /// Returns true if CatalogsItemsBatch instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsItemsBatch to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsItemsBatch other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CatalogType == other.CatalogType ||
                    
                    CatalogType.Equals(other.CatalogType)
                ) && 
                (
                    BatchId == other.BatchId ||
                    BatchId != null &&
                    BatchId.Equals(other.BatchId)
                ) && 
                (
                    CreatedTime == other.CreatedTime ||
                    CreatedTime != null &&
                    CreatedTime.Equals(other.CreatedTime)
                ) && 
                (
                    CompletedTime == other.CompletedTime ||
                    CompletedTime != null &&
                    CompletedTime.Equals(other.CompletedTime)
                ) && 
                (
                    Status == other.Status ||
                    
                    Status.Equals(other.Status)
                ) && 
                (
                    Items == other.Items ||
                    Items != null &&
                    other.Items != null &&
                    Items.SequenceEqual(other.Items)
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
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    
                    hashCode = hashCode * 59 + CatalogType.GetHashCode();
                    if (BatchId != null)
                    hashCode = hashCode * 59 + BatchId.GetHashCode();
                    if (CreatedTime != null)
                    hashCode = hashCode * 59 + CreatedTime.GetHashCode();
                    if (CompletedTime != null)
                    hashCode = hashCode * 59 + CompletedTime.GetHashCode();
                    
                    hashCode = hashCode * 59 + Status.GetHashCode();
                    if (Items != null)
                    hashCode = hashCode * 59 + Items.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsItemsBatch left, CatalogsItemsBatch right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsItemsBatch left, CatalogsItemsBatch right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
