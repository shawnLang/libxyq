#pragma once

enum class eMod
{
	eModNone = -1,
	// 0
	ePet0,
	eɧ�˽� = ePet0,
	e�޺�,
	eС����,
	eС��,
	eС����,
	// ����
	ePetSs0,
	e�������� = ePetSs0,
	e��������è,
	e�������,
	e��������,
	e��������,
	e������¹,
	e����������,
	e��������,
	e�������,
	e�����˲�����,
	e��������,
	e��������,
	e������ȸ,
	e�������,
	e�������,
	e��������,
	e��������⨺�,
	e�������ع���,
	ePetSsEnd = e�������ع���,
	// ��Ф
	ePetSx0,
	e������ţ = ePetSx0,
	e������,
	e��������,
	e��������,
	e��������,
	e��������,
	e��������,
	e�������,
	e������,
	ePetSxEnd = e������,
	// ����
	ePetBaby0,
	eСëͷ = ePetBaby0,
	eСħͷ,
	eС����,
	eСѾѾ,
	eС��Ů,
	eС����,
	ePetBabyEnd = eС����,
	ePet0end = ePetBabyEnd,
	// 5
	ePet5,
	e���� = ePet5,
	e�󺣹�,
	e����,
	e��ë��,
	e����,
	e����,
	e��,
	e����,
	eҰ��,
	e��ͽ,
	eɽ��,
	eǿ��,
	e������,
	e����,
	ePet5end = e����,
	// 15
	ePet15,
	e���ù� = ePet15,
	e��ͷ��,
	e��󡾫,
	e�ϻ�,
	e����,
	e����,
	e���꾫,
	ePet15end = e���꾫,
	// 25
	ePet25,
	eţ�� = ePet25,
	eС��Ů,
	eҰ��,
	e��,
	eϺ��,
	eз��,
	ePet25end = eз��,
	// 35
	ePet35,
	e��ة�� = ePet35,
	e���ӹ�,
	e֩�뾫,
	e���ܾ�,
	e��ʬ,
	eţͷ,
	e����,
	ePet35end = e����,
	// 45
	ePet45,
	e������ = ePet45,
	e��������,
	e�Ŵ�����,
	e����,
	e��ɽ����,
	ePet45end = e��ɽ����,
	// 55
	ePet55,
	e��� = ePet55,
	e�콫,
	e����ս��,
	e�粮,
	ePet55end = e�粮,
	// 65
	ePet65,
	e��� = ePet65,
	e����,
	e��ʦ,
	e����,
	e����,
	e��ˮҹ��,
	ePet65end = e��ˮҹ��,
	// 75
	ePet75,
	e�������� = ePet75,
	eܽ������,
	eѲ������,
	e��������,
	e��ë����,
	eǧ������,
	eϬţ,
	eϬţ����,
	ePet75end = eϬţ����,
	// 85
	ePet85,
	eҰ���� = ePet85,
	e���ȷ�,
	e���㽫��,
	e����,
	e����,
	ePet85end = e����,
	// 95
	ePet95,
	e�ɷ�Ů� = ePet95,
	e���Ů�,
	e����,
	e��Ѫ��,
	e����ɡ,
	ePet95end = e����ɡ,
	// 105
	ePet105,
	e���� = ePet105,
	e��ƿŮ�,
	e����,
	e��ө����,
	ePet105end = e��ө����,
	// 115
	ePet115,
	// ʦ��
	ePetShifu0 = ePet115,
	e��ҧ�� = ePetShifu0,
	e��������,
	e������,
	eţħ��,
	e��Ԫ����,
	e������ʦ,
	e�׾���,
	e�,
	e�ز���,
	e�������,
	e�ն���ʦ,
	e�����,
	e��ӿ����,
	e������,
	e�׿���,
	ePetShifuEnd = e�׿���,
	// npc
	ePetNpc0,
	e����� = ePetNpc0,
	eɳ����,
	e���,
	e���˽�,
	e��ü��,
	e����,
	e�ܽ���,
	eת����,
	e��ͷ����,
	e�ۺ�,
	e��ͷ,
	ePetNpcEnd = e��ͷ,
	// 
	e������,
	e����,
	e�Ʋ�ͯ��,
	e��ɫ¹,
	eХ��Ȯ,
	eռ��ʦ,
	e����,
	eѩ��,
	ePet115end = eѩ��,
	// 125
	ePet125,
	e������ = ePet125,
	e���,
	e��ħ��,
	e���컢,
	// ���� 125
	e�������,
	eҹ��ɲ,
	e����,
	e����ɮ,
	ePet125end = e����ɮ,
	// 135
	ePet135,
	e̤���� = ePet135,
	e��������,
	eЫ�Ӿ�,
	e��«����,
	// ���� 135
	e����,
	e���س�,
	e������,
	eè��,
	e��,
	ePet135end = e��,
	// 145
	ePet145,
	e������ = ePet145,
	e������,
	// ���� 145
	e����,
	e����,
	ePet145end = e����,
	// ���� 155
	ePet155,
	e��ü��� = ePet155,
	e������Գ,
	e���޿��ܹ�,
	e��������,
	e������,
	// �ɽ�155
	eè����,
	e����,
	e������,
	ePet155end = e������,
	// �ɽ�165
	ePet165,
	e���޿����� = ePet165,
	e�����޺�,
	e����ɳ��,
	ePet165end = e����ɳ��,
	// �ɽ� 175
	ePet175,
	e���ӻ��� = ePet175,
	e�ֹ�Ѳ��,
	e����ͯ��,
	e�������,
	e����Ѳ��,
	// ��ʥ 175
	e������Ů,
	ePet175end = e������Ů,
	// Boss
	e��򼾫,
	e������ħ,
	ePetEnd = e������ħ,
	//////////////////////////////////////////////////////////////////////////
	eJueSe0,
	eJueSeWm0 = eJueSe0,
	eJueSe������ = eJueSeWm0,
	eJueSeIter0,
	eJueSe��ң�� = eJueSeIter0,
	eJueSe����Ů,
	eJueSeӢŮ��,
	eJueSe��ͷ��,
	eJueSe��ħ��,
	eJueSe�Ǿ���,
	eJueSe������,
	eJueSe��̫��,
	eJueSe�����,
	eJueSe���ʶ�,
	eJueSe���켧,
	eJueSeIterEnd = eJueSe���켧,
	eJueSe������,
	eJueSe������,
	eJueSeɱ����,
	eJueSeWmEnd = eJueSeɱ����,
	eJueSe����ʦ,
	eJueSe��زز,
	eJueSe������,
	eJueSeEnd = eJueSe������,


	eNpc0,
	���׹�ʦ = eNpc0,
	�����Ǿ�,
	��ʯ����,
	���������,
	������,
	�̷���,
	��ţ��,
	���й�,
	�仨,
	�����ϰ�,
	�İ���,
	����ξ,
	������,
	��װ���ϰ�,
	��ʯ����,
	�����չ���,
	��ʦү,
	�η�,
	��������,
	��ʥ��,
	�մȷ���,
	����ͷ,
	�������ϰ�,
	�׺���,
	������,
	���ϵ�,
	������,
	³��,
	�ϴ���,
	�ϼ�����,
	�Է�,
	����,
	���,
	�,
	̫���Ͼ�,
	����ɩ,
	��Ԫ��,
	���ϵ��ϰ�,
	Сľ��,
	С�Һ�,
	������,
	̫�׽���,
	ҩ���ϰ�,
	��վ�ϰ�,
	����,
	���ϲ�,
	����ͷ,
	���޵�,
	�Բ�ͷ,
//	֣��ͷ = 49, 
	��ظ,// = eNpc0 + 50,
	���Ի�,
	����Уξ,
//	�׾��� = 53,
	����ʮ��,// = eNpc0 + 54,
	������,
	������,
	����,
	��,
	��߸,
	������,
	��ʴ��,
	���޳�,
	�Ƶ��ϰ�,
	�ܼ�,
	��������,
	����ɽ����,// = eNpc0 + 66,
//  ��ʥ��
	�ֿ����Ա,// = eNpc0 + 68,
	�����콫,
	�϶�,
	��ĸ����,
	����,
	��ëԳ,
	��ɮ,
//	�и����� = 75,
	���޳�,// = eNpc0 + 76,
	�޵���,
	������,
	С��,
	���,
	κ��,
	��Сū,
	������ҽ,
	������,
	����Ů��,
	����,
	����Ů������,
	Ī����,
	С��,
	�Ϲ�ة��,
	Ԭ���,
	С��,
	�����������,
	Īүү,
	С����,
	����ȫ,
	Ů,
	��ʨ��,
	ʨ��,
	ý��,
	����,
	��������,
	������,
	Ů���,
	���������2,
	»��,
	»��2,
	����,
	����2,
	��ʥ��2,
	С���쳤����,
	С�������,
	������,
	����,
	����,
	С����,
//	�ն���ʦ = 116,
	����,// = eNpc0 + 118,
	����,
	ѩ��,
	ѩ��2,
	ѩ��3,
	ѩ��4,
	ѩ��5,
	����,
// 	�׿���,
// 	��ӿ����,
// 	������,
	��Ф��,// = eNpc0 + 49,
	��Фţ,// = eNpc0 + 53,
	��Ф��,// = eNpc0 + 67,
	��Ф��,// = eNpc0 + 75,
	��Ф��,// = eNpc0 + 117,
	��Ф��,// = eNpc0 + 126,
	��Ф��,
	��Ф��,
	��Ф��,
	��Ф��,
	��Ф��,
	��Ф��,
// 133 �յ�
	����,// = eNpc0 + 134,
	������,
	����,
	����,
	С��,
	С��,
	�ɺ�,
	С��,
	С��,
	GM��,
	GMŮ,
	����,
	eNpcEnd = ����
};