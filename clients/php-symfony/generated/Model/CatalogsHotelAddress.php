<?php
/**
 * CatalogsHotelAddress
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
 * Class representing the CatalogsHotelAddress model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsHotelAddress 
{
        /**
     * Primary street address of hotel.
     *
     * @var string|null
     * @SerializedName("addr1")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $addr1 = null;

    /**
     * City where the hotel is located.
     *
     * @var string|null
     * @SerializedName("city")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $city = null;

    /**
     * State, county, province, where the hotel is located.
     *
     * @var string|null
     * @SerializedName("region")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $region = null;

    /**
     * Country where the hotel is located.
     *
     * @var string|null
     * @SerializedName("country")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $country = null;

    /**
     * Required for countries with a postal code system. Postal or zip code of the hotel.
     *
     * @var string|null
     * @SerializedName("postal_code")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $postalCode = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->addr1 = array_key_exists('addr1', $data) ? $data['addr1'] : $this->addr1;
            $this->city = array_key_exists('city', $data) ? $data['city'] : $this->city;
            $this->region = array_key_exists('region', $data) ? $data['region'] : $this->region;
            $this->country = array_key_exists('country', $data) ? $data['country'] : $this->country;
            $this->postalCode = array_key_exists('postalCode', $data) ? $data['postalCode'] : $this->postalCode;
        }
    }

    /**
     * Gets addr1.
     *
     * @return string|null
     */
    public function getAddr1(): ?string
    {
        return $this->addr1;
    }



    /**
     * Sets addr1.
     *
     * @param string|null $addr1  Primary street address of hotel.
     *
     * @return $this
     */
    public function setAddr1(?string $addr1 = null): self
    {
        $this->addr1 = $addr1;

        return $this;
    }

    /**
     * Gets city.
     *
     * @return string|null
     */
    public function getCity(): ?string
    {
        return $this->city;
    }



    /**
     * Sets city.
     *
     * @param string|null $city  City where the hotel is located.
     *
     * @return $this
     */
    public function setCity(?string $city = null): self
    {
        $this->city = $city;

        return $this;
    }

    /**
     * Gets region.
     *
     * @return string|null
     */
    public function getRegion(): ?string
    {
        return $this->region;
    }



    /**
     * Sets region.
     *
     * @param string|null $region  State, county, province, where the hotel is located.
     *
     * @return $this
     */
    public function setRegion(?string $region = null): self
    {
        $this->region = $region;

        return $this;
    }

    /**
     * Gets country.
     *
     * @return string|null
     */
    public function getCountry(): ?string
    {
        return $this->country;
    }



    /**
     * Sets country.
     *
     * @param string|null $country  Country where the hotel is located.
     *
     * @return $this
     */
    public function setCountry(?string $country = null): self
    {
        $this->country = $country;

        return $this;
    }

    /**
     * Gets postalCode.
     *
     * @return string|null
     */
    public function getPostalCode(): ?string
    {
        return $this->postalCode;
    }



    /**
     * Sets postalCode.
     *
     * @param string|null $postalCode  Required for countries with a postal code system. Postal or zip code of the hotel.
     *
     * @return $this
     */
    public function setPostalCode(?string $postalCode = null): self
    {
        $this->postalCode = $postalCode;

        return $this;
    }
}


