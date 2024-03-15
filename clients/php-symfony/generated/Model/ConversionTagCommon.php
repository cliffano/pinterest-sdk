<?php
/**
 * ConversionTagCommon
 *
 * PHP version 8.1.1
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
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the ConversionTagCommon model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class ConversionTagCommon 
{
        /**
     * Ad account ID.
     *
     * @var string|null
     * @SerializedName("ad_account_id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $adAccountId = null;

    /**
     * Tag code snippet.
     *
     * @var string|null
     * @SerializedName("code_snippet")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $codeSnippet = null;

    /**
     * @var EnhancedMatchStatusType|null
     * @SerializedName("enhanced_match_status")
        * @Accessor(getter="getSerializedEnhancedMatchStatus")
        * @Type("string")
     */
    protected ?EnhancedMatchStatusType $enhancedMatchStatus = null;

    /**
     * Tag ID.
     *
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $id = null;

    /**
     * Time for the last event fired.
     *
     * @var float|null
     * @SerializedName("last_fired_time_ms")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $lastFiredTimeMs = null;

    /**
     * Conversion tag name.
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * @var EntityStatus|null
     * @SerializedName("status")
        * @Accessor(getter="getSerializedStatus")
        * @Type("string")
     */
    protected ?EntityStatus $status = null;

    /**
     * Version number.
     *
     * @var string|null
     * @SerializedName("version")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $version = null;

    /**
     * @var ConversionTagConfigs|null
     * @SerializedName("configs")
     * @Assert\Type("OpenAPI\Server\Model\ConversionTagConfigs")
     * @Type("OpenAPI\Server\Model\ConversionTagConfigs")
     */
    protected ?ConversionTagConfigs $configs = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->adAccountId = array_key_exists('adAccountId', $data) ? $data['adAccountId'] : $this->adAccountId;
            $this->codeSnippet = array_key_exists('codeSnippet', $data) ? $data['codeSnippet'] : $this->codeSnippet;
            $this->enhancedMatchStatus = array_key_exists('enhancedMatchStatus', $data) ? $data['enhancedMatchStatus'] : $this->enhancedMatchStatus;
            $this->id = array_key_exists('id', $data) ? $data['id'] : $this->id;
            $this->lastFiredTimeMs = array_key_exists('lastFiredTimeMs', $data) ? $data['lastFiredTimeMs'] : $this->lastFiredTimeMs;
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
            $this->status = array_key_exists('status', $data) ? $data['status'] : $this->status;
            $this->version = array_key_exists('version', $data) ? $data['version'] : $this->version;
            $this->configs = array_key_exists('configs', $data) ? $data['configs'] : $this->configs;
        }
    }

    /**
     * Gets adAccountId.
     *
     * @return string|null
     */
    public function getAdAccountId(): ?string
    {
        return $this->adAccountId;
    }



    /**
     * Sets adAccountId.
     *
     * @param string|null $adAccountId  Ad account ID.
     *
     * @return $this
     */
    public function setAdAccountId(?string $adAccountId = null): self
    {
        $this->adAccountId = $adAccountId;

        return $this;
    }

    /**
     * Gets codeSnippet.
     *
     * @return string|null
     */
    public function getCodeSnippet(): ?string
    {
        return $this->codeSnippet;
    }



    /**
     * Sets codeSnippet.
     *
     * @param string|null $codeSnippet  Tag code snippet.
     *
     * @return $this
     */
    public function setCodeSnippet(?string $codeSnippet = null): self
    {
        $this->codeSnippet = $codeSnippet;

        return $this;
    }

    /**
     * Gets enhancedMatchStatus.
     *
     * @return EnhancedMatchStatusType|null
     */
    public function getEnhancedMatchStatus(): ?EnhancedMatchStatusType
    {
        return $this->enhancedMatchStatus;
    }

    /**
    * Gets enhancedMatchStatus for serialization.
    *
    * @return string|null
    */
    public function getSerializedEnhancedMatchStatus(): string|null
    {
        return $this->enhancedMatchStatus?->value ? (string) $this->enhancedMatchStatus->value : null;
    }


    /**
     * Sets enhancedMatchStatus.
     *
     * @param EnhancedMatchStatusType|null $enhancedMatchStatus
     *
     * @return $this
     */
    public function setEnhancedMatchStatus(?EnhancedMatchStatusType $enhancedMatchStatus = null): self
    {
        $this->enhancedMatchStatus = $enhancedMatchStatus;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId(): ?string
    {
        return $this->id;
    }



    /**
     * Sets id.
     *
     * @param string|null $id  Tag ID.
     *
     * @return $this
     */
    public function setId(?string $id = null): self
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets lastFiredTimeMs.
     *
     * @return float|null
     */
    public function getLastFiredTimeMs(): ?float
    {
        return $this->lastFiredTimeMs;
    }



    /**
     * Sets lastFiredTimeMs.
     *
     * @param float|null $lastFiredTimeMs  Time for the last event fired.
     *
     * @return $this
     */
    public function setLastFiredTimeMs(?float $lastFiredTimeMs = null): self
    {
        $this->lastFiredTimeMs = $lastFiredTimeMs;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName(): ?string
    {
        return $this->name;
    }



    /**
     * Sets name.
     *
     * @param string|null $name  Conversion tag name.
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return EntityStatus|null
     */
    public function getStatus(): ?EntityStatus
    {
        return $this->status;
    }

    /**
    * Gets status for serialization.
    *
    * @return string|null
    */
    public function getSerializedStatus(): string|null
    {
        return $this->status?->value ? (string) $this->status->value : null;
    }


    /**
     * Sets status.
     *
     * @param EntityStatus|null $status
     *
     * @return $this
     */
    public function setStatus(?EntityStatus $status = null): self
    {
        $this->status = $status;

        return $this;
    }

    /**
     * Gets version.
     *
     * @return string|null
     */
    public function getVersion(): ?string
    {
        return $this->version;
    }



    /**
     * Sets version.
     *
     * @param string|null $version  Version number.
     *
     * @return $this
     */
    public function setVersion(?string $version = null): self
    {
        $this->version = $version;

        return $this;
    }

    /**
     * Gets configs.
     *
     * @return ConversionTagConfigs|null
     */
    public function getConfigs(): ?ConversionTagConfigs
    {
        return $this->configs;
    }



    /**
     * Sets configs.
     *
     * @param ConversionTagConfigs|null $configs
     *
     * @return $this
     */
    public function setConfigs(?ConversionTagConfigs $configs = null): self
    {
        $this->configs = $configs;

        return $this;
    }
}

