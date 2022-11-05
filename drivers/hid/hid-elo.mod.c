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
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4f4f1830, "usb_hub_find_child" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7b3ae27f, "usb_hid_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x28343fb6, "hid_hw_stop" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004E7p00000009");
MODULE_ALIAS("hid:b0003g*v000004E7p00000030");

MODULE_INFO(srcversion, "A91B4FA4A8CB78E5D4E6959");
