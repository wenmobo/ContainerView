
//  Created by Rustam Motygullin on 29.07.2018.
//  Copyright © 2018 mrusta. All rights reserved.

#import "ContainerScrollDelegate.h"

@interface DemoCollectionDelegate : ContainerScrollDelegate <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
@property (strong, nonatomic) void(^blockSelectIndex)(NSInteger);
@end
