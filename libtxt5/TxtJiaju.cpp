#include "TxtJiaju.h"
using namespace ctt;
static const std::vector<sJiaju> s_jiajuTables =
{
	{ eItem::一家y, 0x00, 0xBB7384E5, 0x1F74CEFC, "一级家具", "黑麻垂曼帘", { 0x9CC0FC97, 0xECF29BBB } },
	{ eItem::一家y, 0x01, 0x0EA3F791, 0x048FAED8, "一级家具", "桦木圆桌", { 0x021B9BBE } },
	{ eItem::一家y, 0x02, 0x40DBF469, 0x950DB91E, "一级家具", "桦木立柜", { 0x534E2BC7, 0xF92EAB94 } },
	{ eItem::一家y, 0x03, 0xD9706246, 0xC77CED21, "一级家具", "草编地毯", { 0x5E95A672, 0x60CA8F51 } },
	{ eItem::一家y, 0x04, 0x2A858ABF, 0xDD195E16, "一级家具", "漆花竹凳", { 0x57B2FF33, 0x6D8CBB1A } },
	{ eItem::一家y, 0x05, 0xA0F59CD4, 0xEA547557, "一级家具", "榛木床", { 0x6D603700, 0xB3C53F3A } },
	{ eItem::一家y, 0x06, 0xA3E461E0, 0xE6265000, "一级家具", "文竹", { 0xFE72755B } },
	{ eItem::一家y, 0x07, 0x8D1C9B16, 0x6E75C55E, "一级家具", "印花屏风", { 0x1DD23345, 0x4853B8FA } },
	{ eItem::一家y, 0x08, 0xAE1FE52C, 0x8A122388, "一级家具", "君子兰", { 0x2D8A3513 } },
	{ eItem::一家y, 0x09, 0xF1AA1CDC, 0x03DCA686, "一级家具", "蝴蝶兰", { 0x74EF6D5E } },
	{ eItem::一家y, 0x0A, 0x10ACEF55, 0x2BA074EC, "一级家具", "水仙", { 0x6A38DC23 } },
	{ eItem::一家y, 0x0B, 0x3970879B, 0xFB18050C, "一级家具", "仙人掌", { 0xA5C0843E } },
	{ eItem::一家y, 0x0C, 0x1802F06C, 0x966FD5CD, "一级家具", "银烛台", { 0x8986C2B8 } },
	{ eItem::一家y, 0x0D, 0x72B05C62, 0xBD83A424, "一级家具", "玉瓷画瓶", { 0xF70BF42D } },
	{ eItem::一家y, 0x0E, 0x9C7E2DE5, 0x8479C234, "一级家具", "八卦镇邪榻", { 0x25936E8E, 0x484F7A84 } },
	{ eItem::一家y, 0x0F, 0x1D00C78D, 0xE14EA35A, "一级家具", "踏春图", { 0x7E810230, 0xC6495528 } },
	{ eItem::一家y, 0x10, 0xBC647367, 0x1133B493, "一级家具", "漆花地板", {} },
	

	{ eItem::二家e, 0x00, 0xD0522308, 0xBA96E2CF, "二级家具", "白鹤展翅帘", { 0xC93D6B43, 0xDB94B112 } },
	{ eItem::二家e, 0x01, 0x43D43BC3, 0x59166107, "二级家具", "蓝绸绣花帘", { 0xCD5A958F, 0xE5B707B3 } },
	{ eItem::二家e, 0x02, 0x1E3B47E4, 0xCE322B80, "二级家具", "红木八仙桌", { 0x24B0DB4B } },
	{ eItem::二家e, 0x03, 0x749A8DE7, 0x822EDE52, "二级家具", "嵌玉虎纹桌", { 0xECE6D460 } },
	{ eItem::二家e, 0x04, 0x7CF14A8C, 0xFC060E32, "二级家具", "双鱼吉庆柜", { 0xD4001A88, 0xEF30F5E4 } },
	{ eItem::二家e, 0x05, 0x7336C5AB, 0x0E745545, "二级家具", "神仙帐", { 0x3CD5A1C1, 0x5D3976CB } },
	{ eItem::二家e, 0x06, 0xA52D57A2, 0x40DC127D, "二级家具", "彩绘立柜", { 0x6CB98F54, 0xF197C6A3 } },
	{ eItem::二家e, 0x07, 0x69CC2D84, 0xE3EFB84D, "二级家具", "兽皮地毯", { 0x7F1049D7, 0xCE5F651C } },
	{ eItem::二家e, 0x08, 0xFFC56CAC, 0x6A2EADCD, "二级家具", "麻布地毯", { 0x0917AA70, 0xEC48F0DC } },
	{ eItem::二家e, 0x09, 0x31FC79B2, 0x6FC9A4F8, "二级家具", "桦木靠背椅", { 0xD4582E5C, 0xEF3E35B6, 0x291F1300, 0x38D9122F } },
	{ eItem::二家e, 0x0A, 0x36FEC0EE, 0x958ACF12, "二级家具", "月牙凳", { 0x43853A2F, 0xEEA4726F } },
	{ eItem::二家e, 0x0B, 0x0C15DCDE, 0xB77C05F8, "二级家具", "狮子图屏风", { 0xA97E7654, 0xEFACD8B5 } },
	{ eItem::二家e, 0x0C, 0x16B2E033, 0xA466DED1, "二级家具", "花鸟图屏风", { 0xBB82C17C, 0xC155D8B3 } },
	{ eItem::二家e, 0x0D, 0x2F988214, 0xC59023F1, "二级家具", "天山云雪", { 0x6963D165 } },
	{ eItem::二家e, 0x0E, 0x17520E38, 0x338882F8, "二级家具", "龟鹤延年灯", { 0x9CB213E0, 0xF24B1171 } },
	{ eItem::二家e, 0x0F, 0x9FAC7C21, 0xDEC76AF6, "二级家具", "长信宫灯", { 0x2224131A, 0x7C6C1872, 0x2D613E27, 0xD78587D1 } },
	{ eItem::二家e, 0x10, 0x264A5EC9, 0xF0698B61, "二级家具", "雕花马桶", { 0x4D5F3B18, 0xBBA82846 } },
	{ eItem::二家e, 0x11, 0xD9438601, 0xA3274661, "二级家具", "彩绘花瓶", { 0x7710A334 } },
	{ eItem::二家e, 0x12, 0x64D8CADE, 0xCC5DD99C, "二级家具", "夕阳山水图", { 0xA75F8D0D, 0xC9368BE9 } },
	{ eItem::二家e, 0x13, 0x47810AE4, 0x71746931, "二级家具", "猛虎坐山图", { 0x162A74B1, 0x9561FCA8 } },
	{ eItem::二家e, 0x14, 0x03D705CA, 0x034FC4CD, "二级家具", "海之青石凳", { 0x53494D3F, 0x94970693 } },
	{ eItem::二家e, 0x15, 0xE5D6ACF3, 0x51FD07AB, "二级家具", "海之缎面帘", { 0xF1BEC5D7, 0x4A4B88A5 } },
	{ eItem::二家e, 0x16, 0xB8A9E98E, 0xB180CC8C, "二级家具", "海之方桌", { 0x3BEC7A28 } },
	{ eItem::二家e, 0x17, 0x19F7722C, 0xEC89DB91, "二级家具", "海之珠贝图", { 0x2ECBC105, 0x8ED10798 } },
	{ eItem::二家e, 0x18, 0x9B80D08B, 0xCFD88602, "二级家具", "玲珑兔圆桌", { 0x3C8F92D6 } },
	{ eItem::二家e, 0x19, 0xE2A1D30F, 0x8E5DC844, "二级家具", "桦木地板", {} },
	

	{ eItem::三家s, 0x00, 0x373D5C17, 0xE71A42E5, "三级家具", "黄缎锦边帘", { 0x4D8E639F, 0xE649E0EA } },
	{ eItem::三家s, 0x01, 0xDF3EB09B, 0xD78204FC, "三级家具", "紫檀雕花柜", { 0xA666FD13, 0xEC841CBB } },
	{ eItem::三家s, 0x02, 0x33181B3E, 0x38B5ADC6, "三级家具", "百兽镇邪桌", { 0x3A4FB4E6 } },
	{ eItem::三家s, 0x03, 0x34F3E6FA, 0xD941BC31, "三级家具", "八宝呈祥桌", { 0x1D952151 } },
	{ eItem::三家s, 0x04, 0x5FF1A254, 0xE01FC948, "三级家具", "波斯地毯", { 0x3BA5C4F6, 0xA1DB3447 } },
	{ eItem::三家s, 0x05, 0xE873EBDA, 0x2B479E5D, "三级家具", "白虎皮毯", { 0xB590C8E6, 0xF8D7516B, 0x3611E764, 0xC07BE47B } },
	{ eItem::三家s, 0x06, 0xA2F9250A, 0x6E1F9949, "三级家具", "紫檀雕花椅", { 0x4547C5EF, 0x3B7D42C9, 0xF753388E, 0x7924DC61 } },
	{ eItem::三家s, 0x07, 0xDD6A29AE, 0x9662814C, "三级家具", "虎威太师椅", { 0xB50CCD0A, 0x12B7F681, 0xEEF34E15, 0xCDAF25A6 } },
	{ eItem::三家s, 0x08, 0xCA7094E6, 0xF001907F, "三级家具", "龙凤呈祥", { 0x3291E592, 0x368DA460 } },
	{ eItem::三家s, 0x09, 0x1C93E78C, 0xEABCDF89, "三级家具", "壮丽河山", { 0xA4D974C2, 0x335339A5 } },
	{ eItem::三家s, 0x0A, 0xBED2AAC0, 0xE43EE153, "三级家具", "金座雕龙屏风", { 0x11C5B94D, 0x1981A498, 0xCCA34401, 0x70459F4E } },
	{ eItem::三家s, 0x0B, 0xA86184D9, 0x88C32E14, "三级家具", "紫檀马桶", { 0xF019303B, 0x970FA734, 0x2AEF0F24, 0xDDCB9DA7 } },
	{ eItem::三家s, 0x0C, 0xFD182818, 0xA9B71F42, "三级家具", "千佛图", { 0x4F87C814, 0x9F6EDC5B } },
	{ eItem::三家s, 0x0D, 0x09AE42B3, 0x4488275C, "三级家具", "凤凰傲意图", { 0xADFDC47A, 0x19668C39 } },
	{ eItem::三家s, 0x0E, 0x9FD02022, 0x02033EE5, "三级家具", "海之青石桌", { 0x95923CD3, 0x3B1D456E } },
	{ eItem::三家s, 0x0F, 0x2AA4AE65, 0x5860EB63, "三级家具", "海之立柜", { 0x1476C1E4, 0x53B3F1E0 } },
	{ eItem::三家s, 0x10, 0xF28F8139, 0xC496AD4B, "三级家具", "海之藏经架", { 0xD0472BDB, 0x11E849D5 } },
	{ eItem::三家s, 0x11, 0xEFFA3961, 0xA7A41835, "三级家具", "海之彩鱼毯", { 0x56BBF2A8, 0x83A5CFDA } },
	{ eItem::三家s, 0x12, 0x32DBA8F9, 0x8DA6C6F2, "三级家具", "海之明珠屏", { 0xED3C864C, 0xCFA88113 } },
	{ eItem::三家s, 0x13, 0x40F60DBE, 0x97449224, "三级家具", "海之太师椅", { 0xBA7CA01F, 0xC8DCE357 } },
	{ eItem::三家s, 0x14, 0x662A3791, 0x7A147AF6, "三级家具", "海之明珠灯", { 0x9780A89A } },
	{ eItem::三家s, 0x15, 0x3B4C5242, 0x3DA25A39, "三级家具", "海之葵", { 0x03A9C116 } },
	{ eItem::三家s, 0x16, 0xF10B5CF7, 0x999D22CA, "三级家具", "海之巨螺桶", { 0xAC91B75A, 0x41E52168 } },
	{ eItem::三家s, 0x17, 0x5275EB90, 0x30BB01D5, "三级家具", "玲珑兔粉缎帘", { 0x264DB15E, 0x87A09DD8 } },
	{ eItem::三家s, 0x18, 0x72BE0A7D, 0x0B576A19, "三级家具", "玲珑兔立柜", { 0xC8812270, 0xEAB6DFBF } },
	{ eItem::三家s, 0x19, 0x77EDFDF3, 0x33077071, "三级家具", "玲珑兔藏经阁", { 0x9BA56928, 0x9C5EFD57 } },
	{ eItem::三家s, 0x1A, 0xB09069B1, 0xA3EF527E, "三级家具", "玲珑兔书桌", { 0xA3579952, 0x72A926A3 } },
	{ eItem::三家s, 0x1B, 0x5A4A035E, 0xB0A011AB, "三级家具", "玲珑兔靠背椅", { 0x09E22897, 0x6D4A10D7 } },
	{ eItem::三家s, 0x1C, 0x2122C450, 0x41E58771, "三级家具", "玲珑兔摇摇椅", { 0xAF8AFBE6, 0x1F6632D7 } },
	{ eItem::三家s, 0x1D, 0x33E7AC88, 0x1F210E72, "三级家具", "玲珑兔迎客屏", { 0xEB21E353, 0x0879D360 } },
	{ eItem::三家s, 0x1E, 0xE0F5CABF, 0x52F7CD47, "三级家具", "玲珑兔花瓶", { 0x10B4308D } },
	{ eItem::三家s, 0x1F, 0x7BBB3636, 0x84AF8E15, "三级家具", "玲珑兔惬意桶", { 0xF0D05250, 0x1B7BA35B } },
	{ eItem::三家s, 0x20, 0xDD1346DC, 0x35997A39, "三级家具", "红木地板", {} },
	
	{ eItem::四家s, 0x00, 0x6C7143EF, 0x80D12303, "四级家具", "红杏闹春帘", { 0x68F0DA23, 0xA5781F59 } },
	{ eItem::四家s, 0x01, 0x7EF80073, 0xB3589DB5, "四级家具", "招财聚宝柜", { 0x9B75BD21, 0x5E1DC5ED } },
	{ eItem::四家s, 0x02, 0xDB9D4A0F, 0xA02C51DB, "四级家具", "宁夜安梦", { 0x19AFB2FD, 0x788960BB } },
	{ eItem::四家s, 0x03, 0xE14D7033, 0x085E408B, "四级家具", "五谷轮回桶", { 0x1F389D5C, 0xE8E3C910, 0x1FE2A757, 0x62576574 } },
	{ eItem::四家s, 0x04, 0x5F038868, 0xDF229700, "四级家具", "海之珊瑚卧", { 0xE8376979, 0x977D7705 } },
	{ eItem::四家s, 0x05, 0x58F496BC, 0xD13E4DC7, "四级家具", "海之彩贝榻", { 0xE9EAE8CC, 0x4FFD83D8 } },
	{ eItem::四家s, 0x06, 0x81F0A83B, 0x3ACEA619, "四级家具", "玲珑兔贵妃卧", { 0x7D12C9A8, 0xEE1C2260 } },
	{ eItem::四家s, 0x07, 0x8D09DB3D, 0x6122DCE1, "四级家具", "玲珑兔甜梦榻", { 0x4BA2D2CC, 0x4BED0579 } },
	{ eItem::四家s, 0x08, 0xFC2C30F8, 0x7431C5CE, "四级家具", "博古通今桌", { 0x000799C4, 0x4216D197, 0xBA484F88, 0xCB1A0B3B } },
	{ eItem::四家s, 0x09, 0xB9B3D96E, 0xE123EFC8, "四级家具", "翠珠梳妆台", { 0x4EE23265, 0xFE56A6D6 } },
	{ eItem::四家s, 0x0A, 0xC57E291C, 0x75CA8F58, "四级家具", "紫檀藏经阁", { 0x3C392709, 0x2436E56F } },
	{ eItem::四家s, 0x0B, 0x5519E14F, 0x08624B19, "四级家具", "怡然太师椅", { 0x0E73E53D, 0x794F1443, 0xCAB4283D, 0xDC42F2AD } },
	{ eItem::四家s, 0x0C, 0x76F7CA15, 0x0C7BDBAB, "四级家具", "雕花贵妃卧", { 0x15EECE3E, 0x219C1D33 } },
	{ eItem::四家s, 0x0D, 0x6E26C2AC, 0xBAFB2D90, "四级家具", "福禄鸳鸯榻", { 0x68596FB3, 0x402D59BB } },
	{ eItem::四家s, 0x0E, 0x861E05F9, 0x4917E304, "四级家具", "吉祥祈福案", { 0x02C93AAF, 0x899A7B0C } },
	{ eItem::四家s, 0x0F, 0x9A928602, 0x811D9452, "四级家具", "花开富贵门", {} },
	{ eItem::四家s, 0x10, 0xE15A8F82, 0x5A483B55, "四级家具", "海之七色门", { 0xF8696164, 0xD6B0B056, 0x9B4C9F9C, 0x70526BE6, 0x4B24E1A5, 0x41B08225, 0x283DA162, 0x4527CD80, 0x4C1BA5B0, 0x71666D92, 0xD40C60C5 } },
	{ eItem::四家s, 0x11, 0x380BD908, 0x4CEE4CD2, "四级家具", "玲珑兔美梦屏风", { 0xDCCF29C0, 0xB8A8530C, 0xF3DD138B, 0x5D09B0B6, 0x6C0C8D98, 0x4353C25C } },
	{ eItem::四家s, 0x12, 0xA14743EA, 0x5459750C, "四级家具", "海之蔚蓝石砖", {} },
	{ eItem::四家s, 0x13, 0xA4CEBA00, 0x880A08ED, "四级家具", "玲珑兔梦幻家园", {} },
};

const vector<sJiaju>& ctt::getJiajus()
{
	return s_jiajuTables;
}
