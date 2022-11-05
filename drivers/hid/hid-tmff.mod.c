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
	{ 0xa6c96402, "_dev_err" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000044Fp0000B300");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B304");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B320");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B323");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B324");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B605");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B651");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B653");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B654");
MODULE_ALIAS("hid:b0003g*v0000044Fp0000B65A");

MODULE_INFO(srcversion, "F24994261400AA239540550");
