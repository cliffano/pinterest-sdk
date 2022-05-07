using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class CatalogsProductGroupPricingCriteria {
    /// <summary>
    /// Gets or Sets Inclusion
    /// </summary>
    [DataMember(Name="inclusion", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "inclusion")]
    public bool? Inclusion { get; set; }

    /// <summary>
    /// Gets or Sets Values
    /// </summary>
    [DataMember(Name="values", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "values")]
    public decimal? Values { get; set; }

    /// <summary>
    /// Gets or Sets Negated
    /// </summary>
    [DataMember(Name="negated", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "negated")]
    public bool? Negated { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class CatalogsProductGroupPricingCriteria {\n");
      sb.Append("  Inclusion: ").Append(Inclusion).Append("\n");
      sb.Append("  Values: ").Append(Values).Append("\n");
      sb.Append("  Negated: ").Append(Negated).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
    }

}
}
