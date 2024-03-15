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
    /// 
    /// </summary>
    [DataContract]
    public partial class TrendingKeywordsResponseTrendsInner : IEquatable<TrendingKeywordsResponseTrendsInner>
    {
        /// <summary>
        /// The keyword that is trending.
        /// </summary>
        /// <value>The keyword that is trending.</value>
        /// <example>couples halloween costumes</example>
        [MinLength(1)]
        [DataMember(Name="keyword", EmitDefaultValue=false)]
        public string Keyword { get; set; }

        /// <summary>
        /// The week-over-week percent change in search volume for this keyword.&lt;br /&gt; For example, a value of \&quot;50\&quot; would represent a 50% increase in searches in the last seven days compared to the week prior.&lt;br /&gt; **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced &gt; 10000% week-over-week growth.
        /// </summary>
        /// <value>The week-over-week percent change in search volume for this keyword.&lt;br /&gt; For example, a value of \&quot;50\&quot; would represent a 50% increase in searches in the last seven days compared to the week prior.&lt;br /&gt; **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced &gt; 10000% week-over-week growth.</value>
        /// <example>50</example>
        [DataMember(Name="pct_growth_wow", EmitDefaultValue=true)]
        public int PctGrowthWow { get; set; }

        /// <summary>
        /// The month-over-month percent change in search volume for this keyword.&lt;br /&gt; For example, a value of \&quot;400\&quot; would represent a 400% increase in searches in the last 30 days compared to the month prior.&lt;br /&gt; **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced &gt; 10000% month-over-month growth.
        /// </summary>
        /// <value>The month-over-month percent change in search volume for this keyword.&lt;br /&gt; For example, a value of \&quot;400\&quot; would represent a 400% increase in searches in the last 30 days compared to the month prior.&lt;br /&gt; **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced &gt; 10000% month-over-month growth.</value>
        /// <example>400</example>
        [DataMember(Name="pct_growth_mom", EmitDefaultValue=true)]
        public int PctGrowthMom { get; set; }

        /// <summary>
        /// The year-over-year percent change in search volume for this keyword.&lt;br /&gt; For example, a value of \&quot;-5\&quot; would represent a 5% decrease in searches in the last 365 days compared to the month prior.&lt;br /&gt; **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced &gt; 10000% year-over-year growth.
        /// </summary>
        /// <value>The year-over-year percent change in search volume for this keyword.&lt;br /&gt; For example, a value of \&quot;-5\&quot; would represent a 5% decrease in searches in the last 365 days compared to the month prior.&lt;br /&gt; **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced &gt; 10000% year-over-year growth.</value>
        /// <example>-5</example>
        [DataMember(Name="pct_growth_yoy", EmitDefaultValue=true)]
        public int PctGrowthYoy { get; set; }

        /// <summary>
        /// Gets or Sets TimeSeries
        /// </summary>
        [DataMember(Name="time_series", EmitDefaultValue=false)]
        public TrendingKeywordsResponseTrendsInnerTimeSeries TimeSeries { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TrendingKeywordsResponseTrendsInner {\n");
            sb.Append("  Keyword: ").Append(Keyword).Append("\n");
            sb.Append("  PctGrowthWow: ").Append(PctGrowthWow).Append("\n");
            sb.Append("  PctGrowthMom: ").Append(PctGrowthMom).Append("\n");
            sb.Append("  PctGrowthYoy: ").Append(PctGrowthYoy).Append("\n");
            sb.Append("  TimeSeries: ").Append(TimeSeries).Append("\n");
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
            return obj.GetType() == GetType() && Equals((TrendingKeywordsResponseTrendsInner)obj);
        }

        /// <summary>
        /// Returns true if TrendingKeywordsResponseTrendsInner instances are equal
        /// </summary>
        /// <param name="other">Instance of TrendingKeywordsResponseTrendsInner to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(TrendingKeywordsResponseTrendsInner other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Keyword == other.Keyword ||
                    Keyword != null &&
                    Keyword.Equals(other.Keyword)
                ) && 
                (
                    PctGrowthWow == other.PctGrowthWow ||
                    
                    PctGrowthWow.Equals(other.PctGrowthWow)
                ) && 
                (
                    PctGrowthMom == other.PctGrowthMom ||
                    
                    PctGrowthMom.Equals(other.PctGrowthMom)
                ) && 
                (
                    PctGrowthYoy == other.PctGrowthYoy ||
                    
                    PctGrowthYoy.Equals(other.PctGrowthYoy)
                ) && 
                (
                    TimeSeries == other.TimeSeries ||
                    TimeSeries != null &&
                    TimeSeries.Equals(other.TimeSeries)
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
                    if (Keyword != null)
                    hashCode = hashCode * 59 + Keyword.GetHashCode();
                    
                    hashCode = hashCode * 59 + PctGrowthWow.GetHashCode();
                    
                    hashCode = hashCode * 59 + PctGrowthMom.GetHashCode();
                    
                    hashCode = hashCode * 59 + PctGrowthYoy.GetHashCode();
                    if (TimeSeries != null)
                    hashCode = hashCode * 59 + TimeSeries.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(TrendingKeywordsResponseTrendsInner left, TrendingKeywordsResponseTrendsInner right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(TrendingKeywordsResponseTrendsInner left, TrendingKeywordsResponseTrendsInner right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}