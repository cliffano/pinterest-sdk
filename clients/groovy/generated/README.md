# 

Pinterest's REST API

This Groovy package, using the [http-builder-ng library](https://http-builder-ng.github.io/http-builder-ng/), is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: 5.3.0
- Package version: 5.3.0
- Build date: 2022-07-01T11:57:55.756787Z[Etc/UTC]
- Build package: org.openapitools.codegen.languages.GroovyClientCodegen
For more information, please visit [https://github.com/cliffano/pinterest-sdk](https://github.com/cliffano/pinterest-sdk)

## Requirements

* Groovy 2.5.7
* Gradle 4.9

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

## Getting Started


```groovy
def apiInstance = new AdAccountsApi()
def adAccountId = "adAccountId_example" // String | Unique identifier of an ad account.
def startDate = new Date() // Date | Metric report start date (UTC). Format: YYYY-MM-DD
def endDate = new Date() // Date | Metric report end date (UTC). Format: YYYY-MM-DD
def columns = Arrays.asList() // List<String> | Columns to retrieve. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned
def granularity = Granularity.fromValue("TOTAL") // Granularity | Granularity
def clickWindowDays = 1 // Integer | Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
def engagementWindowDays = 1 // Integer | Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
def viewWindowDays = 1 // Integer | Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
def conversionReportTime = "TIME_OF_AD_ACTION" // String | The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.

apiInstance.adAccountAnalytics(adAccountId, startDate, endDate, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime)
    {
    // on success
    def result = (List&lt;Map&lt;String, Object&gt;&gt;)it
    println result
    
}
    {
    // on failure
    statusCode, message ->
        println "${statusCode} ${message}"
};
```

