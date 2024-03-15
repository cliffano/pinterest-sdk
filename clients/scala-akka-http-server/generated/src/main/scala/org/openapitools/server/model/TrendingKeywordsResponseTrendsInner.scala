package org.openapitools.server.model


/**
 * @param keyword The keyword that is trending. for example: ''couples halloween costumes''
 * @param pctGrowthWow The week-over-week percent change in search volume for this keyword.<br /> For example, a value of \"50\" would represent a 50% increase in searches in the last seven days compared to the week prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% week-over-week growth. for example: ''50''
 * @param pctGrowthMom The month-over-month percent change in search volume for this keyword.<br /> For example, a value of \"400\" would represent a 400% increase in searches in the last 30 days compared to the month prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% month-over-month growth. for example: ''400''
 * @param pctGrowthYoy The year-over-year percent change in search volume for this keyword.<br /> For example, a value of \"-5\" would represent a 5% decrease in searches in the last 365 days compared to the month prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% year-over-year growth. for example: ''-5''
 * @param timeSeries  for example: ''null''
*/
final case class TrendingKeywordsResponseTrendsInner (
  keyword: Option[String] = None,
  pctGrowthWow: Option[Int] = None,
  pctGrowthMom: Option[Int] = None,
  pctGrowthYoy: Option[Int] = None,
  timeSeries: Option[TrendingKeywordsResponseTrendsInnerTimeSeries] = None
)

