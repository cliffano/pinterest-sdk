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
    /// ConversionTagCreate
    /// </summary>
    [DataContract(Name = "ConversionTagCreate")]
    public partial class ConversionTagCreate : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ConversionTagCreate" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ConversionTagCreate() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ConversionTagCreate" /> class.
        /// </summary>
        /// <param name="name">Conversion tag name. (required).</param>
        /// <param name="aemEnabled">Whether Automatic Enhanced Match email is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information. (default to false).</param>
        /// <param name="mdFrequency">Metadata ingestion frequency. (default to 1M).</param>
        /// <param name="aemFnlnEnabled">Whether Automatic Enhanced Match name is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information. (default to false).</param>
        /// <param name="aemPhEnabled">Whether Automatic Enhanced Match phone is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information. (default to false).</param>
        /// <param name="aemGeEnabled">Whether Automatic Enhanced Match gender is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information. (default to false).</param>
        /// <param name="aemDbEnabled">Whether Automatic Enhanced Match birthdate is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information. (default to false).</param>
        /// <param name="aemLocEnabled">Whether Automatic Enhanced Match location is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information. (default to false).</param>
        public ConversionTagCreate(string name = default(string), bool? aemEnabled = false, decimal? mdFrequency = 1M, bool? aemFnlnEnabled = false, bool? aemPhEnabled = false, bool? aemGeEnabled = false, bool? aemDbEnabled = false, bool? aemLocEnabled = false)
        {
            // to ensure "name" is required (not null)
            if (name == null)
            {
                throw new ArgumentNullException("name is a required property for ConversionTagCreate and cannot be null");
            }
            this.Name = name;
            // use default value if no "aemEnabled" provided
            this.AemEnabled = aemEnabled ?? false;
            // use default value if no "mdFrequency" provided
            this.MdFrequency = mdFrequency ?? 1M;
            // use default value if no "aemFnlnEnabled" provided
            this.AemFnlnEnabled = aemFnlnEnabled ?? false;
            // use default value if no "aemPhEnabled" provided
            this.AemPhEnabled = aemPhEnabled ?? false;
            // use default value if no "aemGeEnabled" provided
            this.AemGeEnabled = aemGeEnabled ?? false;
            // use default value if no "aemDbEnabled" provided
            this.AemDbEnabled = aemDbEnabled ?? false;
            // use default value if no "aemLocEnabled" provided
            this.AemLocEnabled = aemLocEnabled ?? false;
        }

        /// <summary>
        /// Conversion tag name.
        /// </summary>
        /// <value>Conversion tag name.</value>
        /// <example>ACME Tools Tag</example>
        [DataMember(Name = "name", IsRequired = true, EmitDefaultValue = true)]
        public string Name { get; set; }

        /// <summary>
        /// Whether Automatic Enhanced Match email is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
        /// </summary>
        /// <value>Whether Automatic Enhanced Match email is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.</value>
        /// <example>true</example>
        [DataMember(Name = "aem_enabled", EmitDefaultValue = true)]
        public bool? AemEnabled { get; set; }

        /// <summary>
        /// Metadata ingestion frequency.
        /// </summary>
        /// <value>Metadata ingestion frequency.</value>
        /// <example>0.6</example>
        [DataMember(Name = "md_frequency", EmitDefaultValue = true)]
        public decimal? MdFrequency { get; set; }

        /// <summary>
        /// Whether Automatic Enhanced Match name is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
        /// </summary>
        /// <value>Whether Automatic Enhanced Match name is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.</value>
        /// <example>true</example>
        [DataMember(Name = "aem_fnln_enabled", EmitDefaultValue = true)]
        public bool? AemFnlnEnabled { get; set; }

        /// <summary>
        /// Whether Automatic Enhanced Match phone is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
        /// </summary>
        /// <value>Whether Automatic Enhanced Match phone is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.</value>
        /// <example>true</example>
        [DataMember(Name = "aem_ph_enabled", EmitDefaultValue = true)]
        public bool? AemPhEnabled { get; set; }

        /// <summary>
        /// Whether Automatic Enhanced Match gender is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
        /// </summary>
        /// <value>Whether Automatic Enhanced Match gender is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.</value>
        /// <example>true</example>
        [DataMember(Name = "aem_ge_enabled", EmitDefaultValue = true)]
        public bool? AemGeEnabled { get; set; }

        /// <summary>
        /// Whether Automatic Enhanced Match birthdate is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
        /// </summary>
        /// <value>Whether Automatic Enhanced Match birthdate is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.</value>
        /// <example>true</example>
        [DataMember(Name = "aem_db_enabled", EmitDefaultValue = true)]
        public bool? AemDbEnabled { get; set; }

        /// <summary>
        /// Whether Automatic Enhanced Match location is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
        /// </summary>
        /// <value>Whether Automatic Enhanced Match location is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.</value>
        /// <example>true</example>
        [DataMember(Name = "aem_loc_enabled", EmitDefaultValue = true)]
        public bool? AemLocEnabled { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class ConversionTagCreate {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  AemEnabled: ").Append(AemEnabled).Append("\n");
            sb.Append("  MdFrequency: ").Append(MdFrequency).Append("\n");
            sb.Append("  AemFnlnEnabled: ").Append(AemFnlnEnabled).Append("\n");
            sb.Append("  AemPhEnabled: ").Append(AemPhEnabled).Append("\n");
            sb.Append("  AemGeEnabled: ").Append(AemGeEnabled).Append("\n");
            sb.Append("  AemDbEnabled: ").Append(AemDbEnabled).Append("\n");
            sb.Append("  AemLocEnabled: ").Append(AemLocEnabled).Append("\n");
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
