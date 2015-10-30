
package ja13.tk;

import java.io.IOException;

/**
 *
 * @author jared
 */
public class AdvancedAnsi {

    private static boolean overrideSystemType;
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("The system type is " 
                + System.getProperty("os.name") + ".");
        System.out.println("This program is a wrapper designed to be called "
                + "from within another java program, not as a standalone "
                + "executable. Now exiting.");
    }
    
    public static void systemTypeMode(boolean override) {
        overrideSystemType = override;
    }
    
    public static void setParam(int mode, int x, int y) {
        if(System.getProperty("os.name").contains("Windows") && 
                !overrideSystemType) {
            System.out.println("Sorry but Windows is not a supported OS");
        }
        ProcessBuilder proc = new ProcessBuilder("./colorizer", mode + "", x + "", y + "");
        proc.redirectOutput(ProcessBuilder.Redirect.INHERIT);
        try {
            proc.start();
        } catch (IOException ex) {
            System.err.println("Sorry but there was an error running the program \"colorizer\".");
        }
    }
}
