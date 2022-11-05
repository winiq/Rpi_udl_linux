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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x9609ced3, "devm_gpiochip_add_data_with_key" },
	{ 0xcf2bcc3d, "pwmchip_add" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xffde228, "gpiochip_get_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x9784046f, "pwmchip_remove" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x269fdf77, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwm");
MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwmC*");
MODULE_ALIAS("acpi*:INT3492:*");
MODULE_ALIAS("i2c:pca9685");

MODULE_INFO(srcversion, "96304A5EF2D207386E95212");
