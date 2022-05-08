<?php
/**
 * AdsAnalyticsCreateAsyncRequestAllOf1
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
 * Contact: pinterest-api@pinterest.com
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
 * Class representing the AdsAnalyticsCreateAsyncRequestAllOf1 model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class AdsAnalyticsCreateAsyncRequestAllOf1 
{
        /**
     * Metric and entity columns
     *
     * @var OpenAPI\Server\Model\ReportingColumnAsync[]
     * @SerializedName("columns")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ReportingColumnAsync")
     * })
     * @Type("array<OpenAPI\Server\Model\ReportingColumnAsync>")
     */
    protected $columns;

    /**
     * Level of the report
     *
     * @var MetricsReportingLevel
     * @SerializedName("level")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("MetricsReportingLevel")
     * @Type("MetricsReportingLevel")
     */
    protected $level;

    /**
     * Specification for formatting report data
     *
     * @var DataOutputFormat|null
     * @SerializedName("report_format")
     * @Assert\Type("DataOutputFormat")
     * @Type("DataOutputFormat")
     */
    protected $reportFormat;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->columns = isset($data['columns']) ? $data['columns'] : null;
        $this->level = isset($data['level']) ? $data['level'] : null;
        $this->reportFormat = isset($data['reportFormat']) ? $data['reportFormat'] : 'JSON';
    }

    /**
     * Gets columns.
     *
     * @return OpenAPI\Server\Model\ReportingColumnAsync[]
     */
    public function getColumns(): array
    {
        return $this->columns;
    }

    /**
     * Sets columns.
     *
     * @param OpenAPI\Server\Model\ReportingColumnAsync[] $columns  Metric and entity columns
     *
     * @return $this
     */
    public function setColumns(array $columns)
    {
        $this->columns = $columns;

        return $this;
    }

    /**
     * Gets level.
     *
     * @return MetricsReportingLevel
     */
    public function getLevel()
    {
        return $this->level;
    }

    /**
     * Sets level.
     *
     * @param MetricsReportingLevel $level  Level of the report
     *
     * @return $this
     */
    public function setLevel($level)
    {
        $this->level = $level;

        return $this;
    }

    /**
     * Gets reportFormat.
     *
     * @return DataOutputFormat|null
     */
    public function getReportFormat()
    {
        return $this->reportFormat;
    }

    /**
     * Sets reportFormat.
     *
     * @param DataOutputFormat|null $reportFormat  Specification for formatting report data
     *
     * @return $this
     */
    public function setReportFormat($reportFormat = null)
    {
        $this->reportFormat = $reportFormat;

        return $this;
    }
}

