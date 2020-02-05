

console.log('The number of connected USB device: ');


const TbiDeviceManager=require('./tbi.node').TbiDeviceManager;
const Dmm=require('./tbi.node').Dmm;
var tbiDeviceManager = new TbiDeviceManager();
console.log('The number of connected USB device: ' + tbiDeviceManager.getDeviceNum());

var dmm = new Dmm();

//puts sprintf("%.3f [V]", dmm.getVoltage())
//puts sprintf("%.3f [mA]", 1000.0 * dmm.getCurrent())
