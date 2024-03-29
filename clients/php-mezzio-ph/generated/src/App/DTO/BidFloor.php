<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 */
class BidFloor
{
    /**
     * A list of bid floors in micro currency. For example, [100000, 200000]
     * @DTA\Data(field="bid_floors", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection64::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection64::class})
     * @var \App\DTO\Collection64|null
     */
    public $bid_floors;

    /**
     * Always the string &#39;bidfloor&#39;
     * @DTA\Data(field="type", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     * @var string|null
     */
    public $type;

}
