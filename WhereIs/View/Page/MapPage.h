//
//  MapPage.h
//  WhereIs
//
//  Created by admin on 16/5/1.
//  Copyright © 2016年 ShipuW. All rights reserved.
//

#import "BaseNavPage.h"
#import "MapWidget.h"

@interface MapPage : BaseNavPage{
    IBOutlet UIView     *_mapView;
    MapWidget  *_mapWidget;
}

@end
