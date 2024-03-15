<?php
/**
 * AdAccountsCountryResponseData
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
 * Class representing the AdAccountsCountryResponseData model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class AdAccountsCountryResponseData 
{
        /**
     * @var AdCountry|null
     * @SerializedName("code")
        * @Accessor(getter="getSerializedCode")
        * @Type("string")
     */
    protected ?AdCountry $code = null;

    /**
     * Country currency.
     *
     * @var string|null
     * @SerializedName("currency")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $currency = null;

    /**
     * Country index
     *
     * @var float|null
     * @SerializedName("index")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $index = null;

    /**
     * Country name
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->code = array_key_exists('code', $data) ? $data['code'] : $this->code;
            $this->currency = array_key_exists('currency', $data) ? $data['currency'] : $this->currency;
            $this->index = array_key_exists('index', $data) ? $data['index'] : $this->index;
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
        }
    }

    /**
     * Gets code.
     *
     * @return AdCountry|null
     */
    public function getCode(): ?AdCountry
    {
        return $this->code;
    }

    /**
    * Gets code for serialization.
    *
    * @return string|null
    */
    public function getSerializedCode(): string|null
    {
        return $this->code?->value ? (string) $this->code->value : null;
    }


    /**
     * Sets code.
     *
     * @param AdCountry|null $code
     *
     * @return $this
     */
    public function setCode(?AdCountry $code = null): self
    {
        $this->code = $code;

        return $this;
    }

    /**
     * Gets currency.
     *
     * @return string|null
     */
    public function getCurrency(): ?string
    {
        return $this->currency;
    }



    /**
     * Sets currency.
     *
     * @param string|null $currency  Country currency.
     *
     * @return $this
     */
    public function setCurrency(?string $currency = null): self
    {
        $this->currency = $currency;

        return $this;
    }

    /**
     * Gets index.
     *
     * @return float|null
     */
    public function getIndex(): ?float
    {
        return $this->index;
    }



    /**
     * Sets index.
     *
     * @param float|null $index  Country index
     *
     * @return $this
     */
    public function setIndex(?float $index = null): self
    {
        $this->index = $index;

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
     * @param string|null $name  Country name
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }
}


