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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x955004ba, "param_get_uint" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd14820c4, "hid_register_report" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9bbfb761, "__hid_request" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xed5ea3d, "input_alloc_absinfo" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x10b1e3a8, "input_mt_report_pointer_emulation" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000269");
MODULE_ALIAS("hid:b0003g*v000005ACp00000269");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000265");
MODULE_ALIAS("hid:b0003g*v000005ACp00000265");

MODULE_INFO(srcversion, "D10D7BB95A08C5283D8ECD6");
