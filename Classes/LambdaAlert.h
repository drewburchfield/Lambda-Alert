typedef void (^AlertCallback)(void);

@interface LambdaAlert : NSObject <UIAlertViewDelegate>
{
    UIAlertView *alert;
    NSMutableArray *blocks;
}

- (id) initWithTitle: (NSString*) title message: (NSString*) message;
- (void) addButtonWithTitle: (NSString*) title block: (AlertCallback) block;
- (void) show;

@end