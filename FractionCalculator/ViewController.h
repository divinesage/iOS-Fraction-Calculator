//  PROGRAMMER: Alex Lorenzo



#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong,nonatomic) IBOutlet UILabel *display;

-(void) processDigit: (int) digit;
-(void) processOp:(char) theOp;
-(void) storFracPart;


-(IBAction)convert;

//numeric keys
-(IBAction)clickDigit:(UIButton *) sender;

// Arithmetic Operation keys
-(IBAction) clickPlus;
-(IBAction) clickMinus;
-(IBAction) clickMultiply;
-(IBAction) clickDivide;

// Misc. Keys
-(IBAction) clickOver;
-(IBAction) clickEquals;
-(IBAction) clickClear;





@end


