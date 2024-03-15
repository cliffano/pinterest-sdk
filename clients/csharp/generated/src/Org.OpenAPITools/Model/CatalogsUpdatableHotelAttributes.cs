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
    /// CatalogsUpdatableHotelAttributes
    /// </summary>
    [DataContract(Name = "CatalogsUpdatableHotelAttributes")]
    public partial class CatalogsUpdatableHotelAttributes : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsUpdatableHotelAttributes" /> class.
        /// </summary>
        /// <param name="name">The hotel&#39;s name..</param>
        /// <param name="link">Link to the product page.</param>
        /// <param name="description">Brief description of the hotel..</param>
        /// <param name="brand">The brand to which this hotel belongs to..</param>
        /// <param name="latitude">Latitude of the hotel..</param>
        /// <param name="longitude">Longitude of the hotel..</param>
        /// <param name="neighborhood">A list of neighborhoods where the hotel is located.</param>
        /// <param name="address">address.</param>
        /// <param name="customLabel0">Custom grouping of hotels.</param>
        /// <param name="customLabel1">Custom grouping of hotels.</param>
        /// <param name="customLabel2">Custom grouping of hotels.</param>
        /// <param name="customLabel3">Custom grouping of hotels.</param>
        /// <param name="customLabel4">Custom grouping of hotels.</param>
        /// <param name="category">The type of property. The category can be any type of internal description desired..</param>
        /// <param name="basePrice">Base price of the hotel room per night followed by the ISO currency code.</param>
        /// <param name="salePrice">Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel..</param>
        /// <param name="guestRatings">guestRatings.</param>
        public CatalogsUpdatableHotelAttributes(string name = default(string), string link = default(string), string description = default(string), string brand = default(string), decimal latitude = default(decimal), decimal? longitude = default(decimal?), List<string> neighborhood = default(List<string>), CatalogsHotelAddress address = default(CatalogsHotelAddress), string customLabel0 = default(string), string customLabel1 = default(string), string customLabel2 = default(string), string customLabel3 = default(string), string customLabel4 = default(string), string category = default(string), string basePrice = default(string), string salePrice = default(string), CatalogsHotelGuestRatings guestRatings = default(CatalogsHotelGuestRatings))
        {
            this.Name = name;
            this.Link = link;
            this.Description = description;
            this.Brand = brand;
            this.Latitude = latitude;
            this.Longitude = longitude;
            this.Neighborhood = neighborhood;
            this.Address = address;
            this.CustomLabel0 = customLabel0;
            this.CustomLabel1 = customLabel1;
            this.CustomLabel2 = customLabel2;
            this.CustomLabel3 = customLabel3;
            this.CustomLabel4 = customLabel4;
            this.Category = category;
            this.BasePrice = basePrice;
            this.SalePrice = salePrice;
            this.GuestRatings = guestRatings;
        }

        /// <summary>
        /// The hotel&#39;s name.
        /// </summary>
        /// <value>The hotel&#39;s name.</value>
        [DataMember(Name = "name", EmitDefaultValue = true)]
        public string Name { get; set; }

        /// <summary>
        /// Link to the product page
        /// </summary>
        /// <value>Link to the product page</value>
        [DataMember(Name = "link", EmitDefaultValue = true)]
        public string Link { get; set; }

        /// <summary>
        /// Brief description of the hotel.
        /// </summary>
        /// <value>Brief description of the hotel.</value>
        [DataMember(Name = "description", EmitDefaultValue = true)]
        public string Description { get; set; }

        /// <summary>
        /// The brand to which this hotel belongs to.
        /// </summary>
        /// <value>The brand to which this hotel belongs to.</value>
        [DataMember(Name = "brand", EmitDefaultValue = true)]
        public string Brand { get; set; }

        /// <summary>
        /// Latitude of the hotel.
        /// </summary>
        /// <value>Latitude of the hotel.</value>
        [DataMember(Name = "latitude", EmitDefaultValue = false)]
        public decimal Latitude { get; set; }

        /// <summary>
        /// Longitude of the hotel.
        /// </summary>
        /// <value>Longitude of the hotel.</value>
        [DataMember(Name = "longitude", EmitDefaultValue = true)]
        public decimal? Longitude { get; set; }

        /// <summary>
        /// A list of neighborhoods where the hotel is located
        /// </summary>
        /// <value>A list of neighborhoods where the hotel is located</value>
        [DataMember(Name = "neighborhood", EmitDefaultValue = true)]
        public List<string> Neighborhood { get; set; }

        /// <summary>
        /// Gets or Sets Address
        /// </summary>
        [DataMember(Name = "address", EmitDefaultValue = false)]
        public CatalogsHotelAddress Address { get; set; }

        /// <summary>
        /// Custom grouping of hotels
        /// </summary>
        /// <value>Custom grouping of hotels</value>
        [DataMember(Name = "custom_label_0", EmitDefaultValue = true)]
        public string CustomLabel0 { get; set; }

        /// <summary>
        /// Custom grouping of hotels
        /// </summary>
        /// <value>Custom grouping of hotels</value>
        [DataMember(Name = "custom_label_1", EmitDefaultValue = true)]
        public string CustomLabel1 { get; set; }

        /// <summary>
        /// Custom grouping of hotels
        /// </summary>
        /// <value>Custom grouping of hotels</value>
        [DataMember(Name = "custom_label_2", EmitDefaultValue = true)]
        public string CustomLabel2 { get; set; }

        /// <summary>
        /// Custom grouping of hotels
        /// </summary>
        /// <value>Custom grouping of hotels</value>
        [DataMember(Name = "custom_label_3", EmitDefaultValue = true)]
        public string CustomLabel3 { get; set; }

        /// <summary>
        /// Custom grouping of hotels
        /// </summary>
        /// <value>Custom grouping of hotels</value>
        [DataMember(Name = "custom_label_4", EmitDefaultValue = true)]
        public string CustomLabel4 { get; set; }

        /// <summary>
        /// The type of property. The category can be any type of internal description desired.
        /// </summary>
        /// <value>The type of property. The category can be any type of internal description desired.</value>
        [DataMember(Name = "category", EmitDefaultValue = true)]
        public string Category { get; set; }

        /// <summary>
        /// Base price of the hotel room per night followed by the ISO currency code
        /// </summary>
        /// <value>Base price of the hotel room per night followed by the ISO currency code</value>
        /// <example>100 USD</example>
        [DataMember(Name = "base_price", EmitDefaultValue = true)]
        public string BasePrice { get; set; }

        /// <summary>
        /// Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.
        /// </summary>
        /// <value>Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.</value>
        /// <example>90 USD</example>
        [DataMember(Name = "sale_price", EmitDefaultValue = true)]
        public string SalePrice { get; set; }

        /// <summary>
        /// Gets or Sets GuestRatings
        /// </summary>
        [DataMember(Name = "guest_ratings", EmitDefaultValue = false)]
        public CatalogsHotelGuestRatings GuestRatings { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsUpdatableHotelAttributes {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Link: ").Append(Link).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Brand: ").Append(Brand).Append("\n");
            sb.Append("  Latitude: ").Append(Latitude).Append("\n");
            sb.Append("  Longitude: ").Append(Longitude).Append("\n");
            sb.Append("  Neighborhood: ").Append(Neighborhood).Append("\n");
            sb.Append("  Address: ").Append(Address).Append("\n");
            sb.Append("  CustomLabel0: ").Append(CustomLabel0).Append("\n");
            sb.Append("  CustomLabel1: ").Append(CustomLabel1).Append("\n");
            sb.Append("  CustomLabel2: ").Append(CustomLabel2).Append("\n");
            sb.Append("  CustomLabel3: ").Append(CustomLabel3).Append("\n");
            sb.Append("  CustomLabel4: ").Append(CustomLabel4).Append("\n");
            sb.Append("  Category: ").Append(Category).Append("\n");
            sb.Append("  BasePrice: ").Append(BasePrice).Append("\n");
            sb.Append("  SalePrice: ").Append(SalePrice).Append("\n");
            sb.Append("  GuestRatings: ").Append(GuestRatings).Append("\n");
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