#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa7db173d, "input_mt_get_slot_by_key" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9bbfb761, "__hid_request" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xed5ea3d, "input_alloc_absinfo" },
	{ 0x9e4b6ed2, "hidinput_calc_abs_res" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e52f33b, "hid_report_raw_event" },
	{ 0xe78eea12, "hid_alloc_report_buf" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0002v00000596p00000500");
MODULE_ALIAS("hid:b0003g0002v00000596p00000502");
MODULE_ALIAS("hid:b0003g0002v00000596p00000506");
MODULE_ALIAS("hid:b0003g0002v00001130p00003101");
MODULE_ALIAS("hid:b0003g0004v00000B05p0000183D");
MODULE_ALIAS("hid:b0003g0004v00000B05p0000184A");
MODULE_ALIAS("hid:b0003g0002v000003EBp00002118");
MODULE_ALIAS("hid:b0003g0002v00002453p00000100");
MODULE_ALIAS("hid:b0003g0002v00002087p00000A01");
MODULE_ALIAS("hid:b0003g0002v00002087p00000F01");
MODULE_ALIAS("hid:b0003g0002v00002247p00000001");
MODULE_ALIAS("hid:b0003g0002v000024B8p00000020");
MODULE_ALIAS("hid:b0003g0002v000024B8p00000040");
MODULE_ALIAS("hid:b0003g0002v00001FF7p00000013");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000480D");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000480E");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007207");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000720C");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007224");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000722A");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000725E");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007262");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000726B");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072A1");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072AA");
MODULE_ALIAS("hid:b0003g*v00000EEFp000072C4");
MODULE_ALIAS("hid:b0003g*v00000EEFp000072D0");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072FA");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007302");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007349");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000073F7");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000A001");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000C002");
MODULE_ALIAS("hid:b0018g0004v000004F3p0000313A");
MODULE_ALIAS("hid:b0003g0002v000003FCp000005D8");
MODULE_ALIAS("hid:b0003g0002v000025B5p00000002");
MODULE_ALIAS("hid:b0003g0002v000010C4p000081B9");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000003");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000100");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000101");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000102");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000106");
MODULE_ALIAS("hid:b0003g0002v00000DFCp0000010A");
MODULE_ALIAS("hid:b0003g0002v00000DFCp0000E100");
MODULE_ALIAS("hid:b0005g0002v000025B6p00000002");
MODULE_ALIAS("hid:b0003g0002v00001AADp0000000F");
MODULE_ALIAS("hid:b0003g0002v000022EDp00001010");
MODULE_ALIAS("hid:b0003g0002v0000222Ap00000001");
MODULE_ALIAS("hid:b0003g*v00001FD2p00006007");
MODULE_ALIAS("hid:b0018g0001v00001FD2p00007010");
MODULE_ALIAS("hid:b0003g0004v000017EFp000060A3");
MODULE_ALIAS("hid:b0003g0004v000017EFp000060B5");
MODULE_ALIAS("hid:b0003g0004v000017EFp000060FE");
MODULE_ALIAS("hid:b0003g0002v00000486p00000185");
MODULE_ALIAS("hid:b0003g0002v00000486p00000186");
MODULE_ALIAS("hid:b0003g0002v0000062Ap00007100");
MODULE_ALIAS("hid:b0003g0002v00000603p00000600");
MODULE_ALIAS("hid:b0018g0004v00001B96p00001B05");
MODULE_ALIAS("hid:b0003g0002v000004DAp00001044");
MODULE_ALIAS("hid:b0003g0002v000004DAp0000104D");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008001");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008002");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008003");
MODULE_ALIAS("hid:b0003g0002v00002087p00000703");
MODULE_ALIAS("hid:b0003g0002v00000408p00003001");
MODULE_ALIAS("hid:b0018g0004v000006CBp00008323");
MODULE_ALIAS("hid:b0003g0002v00000B8Cp00000092");
MODULE_ALIAS("hid:b0003g0002v00000483p00003261");
MODULE_ALIAS("hid:b0018g0004v000006CBp0000CE08");
MODULE_ALIAS("hid:b0018g0004v000006CBp0000CE09");
MODULE_ALIAS("hid:b0003g0002v00001784p00000016");
MODULE_ALIAS("hid:b0003g0002v00001E5Ep00000313");
MODULE_ALIAS("hid:b0003g0002v0000227Dp00000709");
MODULE_ALIAS("hid:b0003g0002v0000227Dp00000A19");
MODULE_ALIAS("hid:b0003g0002v00000306p0000FF3F");
MODULE_ALIAS("hid:b*g0004v00000416p0000C168");
MODULE_ALIAS("hid:b0003g0002v00000FB8p00001109");
MODULE_ALIAS("hid:b0003g0002v00002505p00000220");
MODULE_ALIAS("hid:b0003g0002v00001477p00001006");
MODULE_ALIAS("hid:b0003g0002v00001477p00001007");
MODULE_ALIAS("hid:b0003g0002v00001477p0000100E");
MODULE_ALIAS("hid:b0003g0002v00001477p00001021");
MODULE_ALIAS("hid:b0003g0002v00001477p00001023");
MODULE_ALIAS("hid:b0003g0002v00001477p00001022");
MODULE_ALIAS("hid:b0003g0002v00001477p00001024");
MODULE_ALIAS("hid:b0003g0002v00001477p00001026");
MODULE_ALIAS("hid:b0003g0002v00001477p00001025");
MODULE_ALIAS("hid:b*g*v000018D1p00005028");
MODULE_ALIAS("hid:b0003g0004v000018D1p00005030");
MODULE_ALIAS("hid:b*g0002v*p*");
MODULE_ALIAS("hid:b*g0004v*p*");

MODULE_INFO(srcversion, "D43F10C3785FD2FF5F20434");