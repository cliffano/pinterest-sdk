<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

class HotelIdFilter
{
    /**
     * @DTA\Data(field="HOTEL_ID")
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\CatalogsProductGroupMultipleStringCriteria::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\CatalogsProductGroupMultipleStringCriteria::class})
     */
    public ?\App\DTO\CatalogsProductGroupMultipleStringCriteria $hotel_id = null;

}
