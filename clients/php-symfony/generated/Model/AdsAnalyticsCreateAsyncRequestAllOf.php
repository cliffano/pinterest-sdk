<?php
/**
 * AdsAnalyticsCreateAsyncRequestAllOf
 *
 * PHP version 7.1.3
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the AdsAnalyticsCreateAsyncRequestAllOf model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class AdsAnalyticsCreateAsyncRequestAllOf 
{
        /**
     * Metric report start date (UTC). Format: YYYY-MM-DD
     *
     * @var string
     * @SerializedName("start_date")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^(\\d{4})-(\\d{2})-(\\d{2})$/")
     */
    protected $startDate;

    /**
     * Metric report end date (UTC). Format: YYYY-MM-DD
     *
     * @var string
     * @SerializedName("end_date")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^(\\d{4})-(\\d{2})-(\\d{2})$/")
     */
    protected $endDate;

    /**
     * TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
     *
     * @var Granularity
     * @SerializedName("granularity")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("Granularity")
     * @Type("Granularity")
     */
    protected $granularity;

    /**
     * Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
     *
     * @var ConversionAttributionWindowDays|null
     * @SerializedName("click_window_days")
     * @Assert\Type("ConversionAttributionWindowDays")
     * @Type("ConversionAttributionWindowDays")
     */
    protected $clickWindowDays;

    /**
     * Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
     *
     * @var ConversionAttributionWindowDays|null
     * @SerializedName("engagement_window_days")
     * @Assert\Type("ConversionAttributionWindowDays")
     * @Type("ConversionAttributionWindowDays")
     */
    protected $engagementWindowDays;

    /**
     * Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
     *
     * @var ConversionAttributionWindowDays|null
     * @SerializedName("view_window_days")
     * @Assert\Type("ConversionAttributionWindowDays")
     * @Type("ConversionAttributionWindowDays")
     */
    protected $viewWindowDays;

    /**
     * The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
     *
     * @var ConversionReportTimeType|null
     * @SerializedName("conversion_report_time")
     * @Assert\Type("ConversionReportTimeType")
     * @Type("ConversionReportTimeType")
     */
    protected $conversionReportTime;

    /**
     * List of types of attribution for the conversion report
     *
     * @var OpenAPI\Server\Model\ConversionReportAttributionType[]|null
     * @SerializedName("attribution_types")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ConversionReportAttributionType")
     * })
     * @Type("array<OpenAPI\Server\Model\ConversionReportAttributionType>")
     */
    protected $attributionTypes;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->startDate = isset($data['startDate']) ? $data['startDate'] : null;
        $this->endDate = isset($data['endDate']) ? $data['endDate'] : null;
        $this->granularity = isset($data['granularity']) ? $data['granularity'] : null;
        $this->clickWindowDays = isset($data['clickWindowDays']) ? $data['clickWindowDays'] : 30;
        $this->engagementWindowDays = isset($data['engagementWindowDays']) ? $data['engagementWindowDays'] : 30;
        $this->viewWindowDays = isset($data['viewWindowDays']) ? $data['viewWindowDays'] : 1;
        $this->conversionReportTime = isset($data['conversionReportTime']) ? $data['conversionReportTime'] : 'TIME_OF_AD_ACTION';
        $this->attributionTypes = isset($data['attributionTypes']) ? $data['attributionTypes'] : null;
    }

    /**
     * Gets startDate.
     *
     * @return string
     */
    public function getStartDate()
    {
        return $this->startDate;
    }

    /**
     * Sets startDate.
     *
     * @param string $startDate  Metric report start date (UTC). Format: YYYY-MM-DD
     *
     * @return $this
     */
    public function setStartDate($startDate)
    {
        $this->startDate = $startDate;

        return $this;
    }

    /**
     * Gets endDate.
     *
     * @return string
     */
    public function getEndDate()
    {
        return $this->endDate;
    }

    /**
     * Sets endDate.
     *
     * @param string $endDate  Metric report end date (UTC). Format: YYYY-MM-DD
     *
     * @return $this
     */
    public function setEndDate($endDate)
    {
        $this->endDate = $endDate;

        return $this;
    }

    /**
     * Gets granularity.
     *
     * @return Granularity
     */
    public function getGranularity()
    {
        return $this->granularity;
    }

    /**
     * Sets granularity.
     *
     * @param Granularity $granularity  TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
     *
     * @return $this
     */
    public function setGranularity($granularity)
    {
        $this->granularity = $granularity;

        return $this;
    }

    /**
     * Gets clickWindowDays.
     *
     * @return ConversionAttributionWindowDays|null
     */
    public function getClickWindowDays()
    {
        return $this->clickWindowDays;
    }

    /**
     * Sets clickWindowDays.
     *
     * @param ConversionAttributionWindowDays|null $clickWindowDays  Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
     *
     * @return $this
     */
    public function setClickWindowDays($clickWindowDays = null)
    {
        $this->clickWindowDays = $clickWindowDays;

        return $this;
    }

    /**
     * Gets engagementWindowDays.
     *
     * @return ConversionAttributionWindowDays|null
     */
    public function getEngagementWindowDays()
    {
        return $this->engagementWindowDays;
    }

    /**
     * Sets engagementWindowDays.
     *
     * @param ConversionAttributionWindowDays|null $engagementWindowDays  Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
     *
     * @return $this
     */
    public function setEngagementWindowDays($engagementWindowDays = null)
    {
        $this->engagementWindowDays = $engagementWindowDays;

        return $this;
    }

    /**
     * Gets viewWindowDays.
     *
     * @return ConversionAttributionWindowDays|null
     */
    public function getViewWindowDays()
    {
        return $this->viewWindowDays;
    }

    /**
     * Sets viewWindowDays.
     *
     * @param ConversionAttributionWindowDays|null $viewWindowDays  Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
     *
     * @return $this
     */
    public function setViewWindowDays($viewWindowDays = null)
    {
        $this->viewWindowDays = $viewWindowDays;

        return $this;
    }

    /**
     * Gets conversionReportTime.
     *
     * @return ConversionReportTimeType|null
     */
    public function getConversionReportTime()
    {
        return $this->conversionReportTime;
    }

    /**
     * Sets conversionReportTime.
     *
     * @param ConversionReportTimeType|null $conversionReportTime  The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
     *
     * @return $this
     */
    public function setConversionReportTime($conversionReportTime = null)
    {
        $this->conversionReportTime = $conversionReportTime;

        return $this;
    }

    /**
     * Gets attributionTypes.
     *
     * @return OpenAPI\Server\Model\ConversionReportAttributionType[]|null
     */
    public function getAttributionTypes(): ?array
    {
        return $this->attributionTypes;
    }

    /**
     * Sets attributionTypes.
     *
     * @param OpenAPI\Server\Model\ConversionReportAttributionType[]|null $attributionTypes  List of types of attribution for the conversion report
     *
     * @return $this
     */
    public function setAttributionTypes(array $attributionTypes = null)
    {
        $this->attributionTypes = $attributionTypes;

        return $this;
    }
}


